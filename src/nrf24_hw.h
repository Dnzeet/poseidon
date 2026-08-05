/*
 * nrf24_hw — nRF24L01+ driver for the combo RF/IR hat (Cardputer ADV).
 *
 * Hat pinout (SCK/MISO/MOSI shared with SD; CS/CE dedicated to nRF24):
 *   SCK=40  MISO=39  MOSI=14  CS=6  CE=5
 */
#pragma once

#include <Arduino.h>
#include <RF24.h>

#define NRF24_CS  6
#define NRF24_CE  5

bool  nrf24_begin(void);
void  nrf24_end(void);
bool  nrf24_is_up(void);
RF24 &nrf24_radio(void);

