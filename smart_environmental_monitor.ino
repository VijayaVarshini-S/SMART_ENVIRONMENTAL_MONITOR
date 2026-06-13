//note include LiquidCrystal_I2C,DHT
#include <Wire.h>
#include <LiquidCrystal_I2C.h>
#include <DHT.h>

#define DHTPIN 2
#define DHTTYPE DHT11

#define LDR_PIN A0
#define SOIL_PIN A1

DHT dht(DHTPIN, DHTTYPE);
LiquidCrystal_I2C lcd(0x27, 16, 2);  // Change to 0x3F if needed

void setup() {
  Serial.begin(9600);
  dht.begin();
  
  lcd.init();
  lcd.backlight();
  
  lcd.setCursor(0,0);
  lcd.print("Env Logger");
  delay(2000);
  lcd.clear();
}

void loop() {

  float humidity = dht.readHumidity();
  float temperature = dht.readTemperature();
  int ldrValue = analogRead(LDR_PIN);
  int soilValue = analogRead(SOIL_PIN);

  // ===== 1. Temperature =====
  lcd.clear();
  lcd.setCursor(0,0);
  lcd.print("Temperature:");
  lcd.setCursor(0,1);
  lcd.print(temperature);
  lcd.print(" C");
  delay(2000);

  // ===== 2. Humidity =====
  lcd.clear();
  lcd.setCursor(0,0);
  lcd.print("Humidity:");
  lcd.setCursor(0,1);
  lcd.print(humidity);
  lcd.print(" %");
  delay(2000);

  // ===== 3. LDR =====
  lcd.clear();
  lcd.setCursor(0,0);
  lcd.print("Light Level:");
  lcd.setCursor(0,1);
  lcd.print(ldrValue);
  delay(2000);

  // ===== 4. Soil Moisture =====
  lcd.clear();
  lcd.setCursor(0,0);
  lcd.print("Soil Moisture:");
  lcd.setCursor(0,1);
  lcd.print(soilValue);
  delay(2000);
}