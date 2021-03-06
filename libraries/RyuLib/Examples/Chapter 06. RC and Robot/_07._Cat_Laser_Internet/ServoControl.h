#ifndef SERVOCONTROL_H
#define SERVOCONTROL_H


#include <Arduino.h>
#include <Servo.h>


#define SPEED 20


const unsigned char pattern_1[1026] PROGMEM = { 0x06, 0x07, 0x07, 0x07, 0x07, 0x07, 0x08, 0x07, 0x08, 0x07, 0x09, 0x07, 0x09, 0x07, 0x0A, 0x07, 0x0A, 0x07, 0x0B, 0x07, 0x0C, 0x07, 0x0C, 0x07, 0x0D, 0x07, 0x0D, 0x07, 0x0E, 0x07, 0x0E, 0x07, 0x0F, 0x07, 0x10, 0x07, 0x10, 0x07, 0x11, 0x07, 0x12, 0x07, 0x12, 0x07, 0x13, 0x07, 0x13, 0x07, 0x14, 0x07, 0x14, 0x07, 0x15, 0x07, 0x15, 0x07, 0x16, 0x07, 0x16, 0x07, 0x17, 0x08, 0x17, 0x08, 0x18, 0x08, 0x18, 0x08, 0x19, 0x08, 0x19, 0x08, 0x1A, 0x08, 0x1B, 0x08, 0x1B, 0x08, 0x1C, 0x08, 0x1D, 0x08, 0x1D, 0x08, 0x1E, 0x08, 0x1E, 0x08, 0x1F, 0x08, 0x20, 0x08, 0x21, 0x08, 0x21, 0x08, 0x22, 0x08, 0x23, 0x08, 0x24, 0x08, 0x24, 0x08, 0x25, 0x08, 0x25, 0x08, 0x26, 0x08, 0x26, 0x08, 0x27, 0x08, 0x27, 0x08, 0x28, 0x08, 0x29, 0x08, 0x2A, 0x08, 0x2B, 0x08, 0x2C, 0x08, 0x2C, 0x08, 0x2D, 0x08, 0x2D, 0x08, 0x2E, 0x08, 0x2E, 0x08, 0x2F, 0x08, 0x2F, 0x08, 0x30, 0x08, 0x30, 0x08, 0x31, 0x08, 0x31, 0x08, 0x32, 0x08, 0x32, 0x08, 0x33, 0x08, 0x33, 0x08, 0x34, 0x08, 0x34, 0x08, 0x35, 0x08, 0x35, 0x08, 0x36, 0x08, 0x36, 0x08, 0x37, 0x08, 0x38, 0x08, 0x38, 0x08, 0x39, 0x08, 0x39, 0x08, 0x3A, 0x08, 0x3A, 0x08, 0x3B, 0x08, 0x3B, 0x08, 0x3C, 0x08, 0x3D, 0x08, 0x3D, 0x08, 0x3E, 0x08, 0x3E, 0x08, 0x3F, 0x08, 0x3F, 0x08, 0x40, 0x08, 0x40, 0x08, 0x41, 0x08, 0x41, 0x08, 0x42, 0x08, 0x42, 0x08, 0x43, 0x08, 0x43, 0x08, 0x44, 0x08, 0x45, 0x08, 0x45, 0x08, 0x46, 0x08, 0x46, 0x08, 0x47, 0x08, 0x47, 0x08, 0x48, 0x08, 0x48, 0x08, 0x49, 0x08, 0x49, 0x08, 0x4A, 0x08, 0x4A, 0x08, 0x4B, 0x08, 0x4C, 0x08, 0x4D, 0x08, 0x4D, 0x08, 0x4E, 0x08, 0x4F, 0x08, 0x4F, 0x08, 0x50, 0x08, 0x51, 0x08, 0x51, 0x08, 0x52, 0x08, 0x52, 0x08, 0x53, 0x08, 0x53, 0x08, 0x54, 0x09, 0x54, 0x09, 0x55, 0x09, 0x55, 0x09, 0x56, 0x09, 0x56, 0x09, 0x57, 0x09, 0x58, 0x09, 0x58, 0x09, 0x59, 0x09, 0x59, 0x09, 0x5A, 0x09, 0x5B, 0x09, 0x5B, 0x09, 0x5C, 0x09, 0x5D, 0x09, 0x5E, 0x09, 0x5E, 0x09, 0x5F, 0x09, 0x5F, 0x09, 0x60, 0x09, 0x61, 0x09, 0x62, 0x09, 0x62, 0x09, 0x63, 0x09, 0x63, 0x09, 0x64, 0x09, 0x64, 0x09, 0x65, 0x09, 0x65, 0x09, 0x66, 0x09, 0x66, 0x09, 0x67, 0x09, 0x67, 0x09, 0x68, 0x09, 0x68, 0x09, 0x69, 0x09, 0x69, 0x09, 0x6A, 0x09, 0x6A, 0x09, 0x6B, 0x09, 0x6B, 0x09, 0x6C, 0x09, 0x6D, 0x09, 0x6E, 0x09, 0x6E, 0x09, 0x6F, 0x09, 0x6F, 0x09, 0x70, 0x09, 0x71, 0x09, 0x71, 0x09, 0x72, 0x09, 0x72, 0x09, 0x73, 0x09, 0x74, 0x09, 0x74, 0x09, 0x75, 0x09, 0x76, 0x09, 0x76, 0x09, 0x77, 0x09, 0x77, 0x09, 0x78, 0x09, 0x78, 0x09, 0x79, 0x09, 0x79, 0x09, 0x7A, 0x09, 0x7A, 0x09, 0x7A, 0x0A, 0x7A, 0x0A, 0x7A, 0x0B, 0x7A, 0x0B, 0x7A, 0x0C, 0x7A, 0x0C, 0x7A, 0x0D, 0x7A, 0x0D, 0x7A, 0x0E, 0x7A, 0x0E, 0x7A, 0x0F, 0x7A, 0x0F, 0x7A, 0x10, 0x7A, 0x10, 0x7A, 0x11, 0x7A, 0x11, 0x7A, 0x12, 0x7A, 0x13, 0x7A, 0x13, 0x7A, 0x14, 0x7A, 0x14, 0x7A, 0x15, 0x7A, 0x15, 0x7A, 0x16, 0x7A, 0x16, 0x7A, 0x17, 0x7A, 0x17, 0x7A, 0x18, 0x7A, 0x18, 0x7A, 0x19, 0x7A, 0x19, 0x7A, 0x1A, 0x7A, 0x1A, 0x7A, 0x1B, 0x7A, 0x1B, 0x7A, 0x1C, 0x7A, 0x1C, 0x7A, 0x1D, 0x7A, 0x1D, 0x7A, 0x1E, 0x7A, 0x1E, 0x7A, 0x1F, 0x7A, 0x20, 0x7A, 0x20, 0x7A, 0x21, 0x7A, 0x21, 0x7A, 0x22, 0x7A, 0x23, 0x7A, 0x23, 0x7A, 0x24, 0x7A, 0x25, 0x7A, 0x25, 0x7A, 0x26, 0x7A, 0x27, 0x7A, 0x27, 0x7A, 0x28, 0x7A, 0x29, 0x7A, 0x29, 0x7A, 0x2A, 0x7A, 0x2A, 0x79, 0x2A, 0x78, 0x2A, 0x78, 0x2B, 0x77, 0x2B, 0x76, 0x2B, 0x75, 0x2C, 0x74, 0x2C, 0x73, 0x2C, 0x71, 0x2D, 0x71, 0x2D, 0x70, 0x2D, 0x6F, 0x2D, 0x6F, 0x2D, 0x6F, 0x2E, 0x6E, 0x2E, 0x6E, 0x2E, 0x6D, 0x2E, 0x6D, 0x2E, 0x6C, 0x2E, 0x6B, 0x2E, 0x6B, 0x2E, 0x6A, 0x2E, 0x6A, 0x2E, 0x69, 0x2E, 0x68, 0x2E, 0x68, 0x2E, 0x67, 0x2E, 0x66, 0x2E, 0x65, 0x2E, 0x64, 0x2E, 0x64, 0x2E, 0x63, 0x2E, 0x62, 0x2E, 0x62, 0x2E, 0x61, 0x2E, 0x61, 0x2E, 0x60, 0x2E, 0x60, 0x2E, 0x5F, 0x2E, 0x5F, 0x2E, 0x5E, 0x2E, 0x5D, 0x2E, 0x5C, 0x2E, 0x5B, 0x2E, 0x5A, 0x2E, 0x5A, 0x2E, 0x59, 0x2E, 0x58, 0x2E, 0x58, 0x2E, 0x57, 0x2E, 0x56, 0x2E, 0x56, 0x2E, 0x55, 0x2E, 0x54, 0x2E, 0x54, 0x2E, 0x53, 0x2E, 0x53, 0x2E, 0x52, 0x2E, 0x52, 0x2E, 0x51, 0x2E, 0x51, 0x2E, 0x50, 0x2E, 0x50, 0x2E, 0x4F, 0x2E, 0x4F, 0x2E, 0x4E, 0x2E, 0x4E, 0x2E, 0x4D, 0x2E, 0x4D, 0x2E, 0x4C, 0x2E, 0x4B, 0x2E, 0x4B, 0x2E, 0x4A, 0x2E, 0x49, 0x2E, 0x48, 0x2E, 0x47, 0x2E, 0x47, 0x2E, 0x46, 0x2E, 0x44, 0x2F, 0x43, 0x2F, 0x43, 0x2F, 0x42, 0x2F, 0x42, 0x2F, 0x41, 0x2F, 0x41, 0x2F, 0x40, 0x2F, 0x40, 0x2F, 0x3F, 0x2F, 0x3F, 0x2F, 0x3E, 0x2F, 0x3D, 0x2F, 0x3D, 0x2F, 0x3C, 0x2F, 0x3C, 0x2F, 0x3B, 0x2F, 0x3B, 0x2F, 0x3A, 0x2F, 0x3A, 0x2E, 0x3A, 0x2E, 0x39, 0x2E, 0x39, 0x2E, 0x38, 0x2E, 0x38, 0x2E, 0x37, 0x2E, 0x37, 0x2E, 0x36, 0x2E, 0x36, 0x2D, 0x35, 0x2D, 0x35, 0x2D, 0x34, 0x2D, 0x34, 0x2D, 0x33, 0x2D, 0x32, 0x2D, 0x32, 0x2D, 0x31, 0x2D, 0x31, 0x2D, 0x30, 0x2D, 0x30, 0x2D, 0x2F, 0x2D, 0x2F, 0x2C, 0x2F, 0x2C, 0x2E, 0x2C, 0x2E, 0x2C, 0x2D, 0x2C, 0x2D, 0x2C, 0x2C, 0x2C, 0x2B, 0x2C, 0x2A, 0x2C, 0x29, 0x2C, 0x28, 0x2C, 0x27, 0x2C, 0x26, 0x2C, 0x25, 0x2C, 0x25, 0x2C, 0x24, 0x2C, 0x24, 0x2C, 0x23, 0x2C, 0x23, 0x2C, 0x22, 0x2C, 0x22, 0x2C, 0x21, 0x2C, 0x21, 0x2C, 0x20, 0x2C, 0x1F, 0x2C, 0x1E, 0x2C, 0x1D, 0x2C, 0x1C, 0x2C, 0x1C, 0x2C, 0x1B, 0x2C, 0x1A, 0x2C, 0x1A, 0x2C, 0x19, 0x2C, 0x19, 0x2C, 0x18, 0x2C, 0x17, 0x2C, 0x17, 0x2C, 0x16, 0x2C, 0x16, 0x2C, 0x15, 0x2C, 0x15, 0x2C, 0x14, 0x2C, 0x13, 0x2C, 0x13, 0x2C, 0x12, 0x2C, 0x12, 0x2C, 0x11, 0x2C, 0x11, 0x2C, 0x10, 0x2C, 0x10, 0x2C, 0x0F, 0x2C, 0x0F, 0x2D, 0x0E, 0x2D, 0x0D, 0x2D, 0x0C, 0x2D, 0x0C, 0x2D, 0x0B, 0x2D, 0x0B, 0x2D, 0x0A, 0x2D, 0x0A, 0x2D, 0x09, 0x2D, 0x09, 0x2D, 0x08, 0x2C, 0x08, 0x2C, 0x08, 0x2B, 0x07, 0x2A, 0x07, 0x2A, 0x07, 0x29, 0x07, 0x28, 0x07, 0x28, 0x07, 0x27, 0x07, 0x27, 0x07, 0x26, 0x07, 0x26, 0x07, 0x25, 0x07, 0x25, 0x07, 0x24, 0x07, 0x24, 0x06, 0x23, 0x06, 0x22, 0x06, 0x22, 0x06, 0x21, 0x06, 0x21, 0x06, 0x20, 0x06, 0x20, 0x06, 0x20, 0x06, 0x1F, 0x06, 0x1F, 0x05, 0x1E, 0x05, 0x1E, 0x05, 0x1D, 0x05, 0x1D, 0x05, 0x1C, 0x05, 0x1B, 0x05, 0x1A, 0x05, 0x19, 0x05, 0x19, 0x05, 0x18, 0x05, 0x18, 0x05, 0x17, 0x05, 0x17, 0x05, 0x16, 0x05, 0x16, 0x05, 0x16, 0x05, 0x15, 0x05, 0x14, 0x05, 0x13, 0x05, 0x13, 0x05, 0x12, 0x05, 0x11, 0x05, 0x11, 0x05, 0x10, 0x05, 0x10, 0x05, 0x0F, 0x05, 0x0F, 0x05, 0x0E, 0x06, 0x0E, 0x06, 0x0D, 0x06, 0x0D, 0x06, 0x0D, 0x06, 0x0C, 0x06, 0x0C, 0x06, 0x0B, 0x07, 0x0B, 0x07, 0x0B, 0x07, 0x0A, 0x07, 0x0A, 0x07, 0x0A, 0x07, 0x09, 0x07, 0x09, 0x07, 0x08, 0x07, 0x08 };
const unsigned char pattern_2[1158] PROGMEM = { 0x51, 0x09, 0x51, 0x09, 0x50, 0x09, 0x4F, 0x09, 0x4E, 0x09, 0x4E, 0x09, 0x4D, 0x09, 0x4C, 0x09, 0x4B, 0x09, 0x4A, 0x09, 0x49, 0x09, 0x49, 0x09, 0x48, 0x0A, 0x47, 0x0A, 0x46, 0x0A, 0x45, 0x0A, 0x45, 0x0A, 0x44, 0x0A, 0x43, 0x0A, 0x43, 0x0A, 0x43, 0x0B, 0x42, 0x0B, 0x41, 0x0B, 0x40, 0x0B, 0x3F, 0x0B, 0x3E, 0x0B, 0x3D, 0x0B, 0x3D, 0x0B, 0x3C, 0x0B, 0x3B, 0x0B, 0x3B, 0x0C, 0x3A, 0x0C, 0x39, 0x0C, 0x39, 0x0C, 0x38, 0x0D, 0x37, 0x0D, 0x36, 0x0D, 0x35, 0x0D, 0x34, 0x0D, 0x34, 0x0D, 0x33, 0x0E, 0x32, 0x0E, 0x31, 0x0E, 0x31, 0x0E, 0x30, 0x0E, 0x30, 0x0E, 0x2F, 0x0E, 0x2E, 0x0F, 0x2D, 0x0F, 0x2D, 0x0F, 0x2C, 0x10, 0x2C, 0x10, 0x2B, 0x10, 0x2B, 0x10, 0x2A, 0x11, 0x2A, 0x11, 0x29, 0x11, 0x29, 0x11, 0x28, 0x11, 0x28, 0x11, 0x28, 0x12, 0x27, 0x12, 0x27, 0x12, 0x26, 0x12, 0x26, 0x12, 0x25, 0x13, 0x25, 0x13, 0x24, 0x13, 0x24, 0x13, 0x23, 0x14, 0x23, 0x14, 0x22, 0x14, 0x22, 0x14, 0x22, 0x14, 0x21, 0x14, 0x21, 0x15, 0x20, 0x15, 0x20, 0x15, 0x1F, 0x15, 0x1F, 0x16, 0x1E, 0x16, 0x1E, 0x16, 0x1E, 0x17, 0x1D, 0x17, 0x1C, 0x17, 0x1C, 0x18, 0x1B, 0x18, 0x1B, 0x18, 0x1A, 0x19, 0x1A, 0x19, 0x1A, 0x19, 0x19, 0x19, 0x19, 0x1A, 0x19, 0x1A, 0x18, 0x1A, 0x18, 0x1B, 0x18, 0x1B, 0x17, 0x1B, 0x17, 0x1B, 0x17, 0x1C, 0x17, 0x1C, 0x16, 0x1C, 0x16, 0x1C, 0x16, 0x1D, 0x15, 0x1D, 0x15, 0x1E, 0x14, 0x1E, 0x14, 0x1F, 0x13, 0x1F, 0x13, 0x20, 0x13, 0x20, 0x12, 0x20, 0x12, 0x21, 0x12, 0x21, 0x12, 0x22, 0x11, 0x22, 0x11, 0x23, 0x11, 0x23, 0x11, 0x23, 0x10, 0x24, 0x10, 0x24, 0x10, 0x25, 0x10, 0x26, 0x0F, 0x26, 0x0F, 0x27, 0x0F, 0x27, 0x0E, 0x28, 0x0E, 0x28, 0x0E, 0x29, 0x0E, 0x29, 0x0E, 0x2A, 0x0E, 0x2A, 0x0E, 0x2B, 0x0E, 0x2B, 0x0E, 0x2C, 0x0E, 0x2C, 0x0E, 0x2D, 0x0E, 0x2E, 0x0E, 0x2E, 0x0E, 0x2F, 0x0E, 0x2F, 0x0E, 0x30, 0x0E, 0x31, 0x0E, 0x31, 0x0E, 0x32, 0x0E, 0x32, 0x0E, 0x32, 0x0E, 0x33, 0x0F, 0x33, 0x0F, 0x33, 0x0F, 0x34, 0x0F, 0x34, 0x0F, 0x34, 0x0F, 0x35, 0x0F, 0x35, 0x0F, 0x36, 0x10, 0x36, 0x10, 0x36, 0x10, 0x37, 0x11, 0x37, 0x11, 0x37, 0x11, 0x38, 0x11, 0x38, 0x12, 0x38, 0x12, 0x39, 0x12, 0x39, 0x12, 0x3A, 0x13, 0x3A, 0x13, 0x3B, 0x14, 0x3B, 0x14, 0x3C, 0x15, 0x3C, 0x15, 0x3D, 0x15, 0x3D, 0x15, 0x3E, 0x16, 0x3E, 0x16, 0x3E, 0x16, 0x3E, 0x17, 0x3F, 0x17, 0x3F, 0x18, 0x3F, 0x18, 0x40, 0x19, 0x40, 0x19, 0x41, 0x19, 0x41, 0x1A, 0x41, 0x1A, 0x42, 0x1B, 0x42, 0x1B, 0x43, 0x1C, 0x43, 0x1C, 0x43, 0x1D, 0x44, 0x1D, 0x44, 0x1E, 0x45, 0x1E, 0x45, 0x1F, 0x45, 0x1F, 0x46, 0x1F, 0x46, 0x20, 0x46, 0x20, 0x47, 0x21, 0x47, 0x21, 0x47, 0x21, 0x48, 0x22, 0x48, 0x22, 0x48, 0x23, 0x49, 0x23, 0x49, 0x24, 0x49, 0x24, 0x49, 0x24, 0x4A, 0x25, 0x4A, 0x26, 0x4A, 0x26, 0x4A, 0x27, 0x4B, 0x28, 0x4B, 0x29, 0x4B, 0x29, 0x4C, 0x2A, 0x4C, 0x2A, 0x4C, 0x2B, 0x4C, 0x2B, 0x4C, 0x2C, 0x4C, 0x2D, 0x4D, 0x2E, 0x4D, 0x2F, 0x4E, 0x2F, 0x4E, 0x30, 0x4E, 0x32, 0x4F, 0x33, 0x4F, 0x34, 0x4F, 0x35, 0x4F, 0x36, 0x4F, 0x36, 0x4F, 0x37, 0x4F, 0x38, 0x4F, 0x38, 0x4F, 0x39, 0x4F, 0x39, 0x4F, 0x39, 0x50, 0x3A, 0x50, 0x3A, 0x50, 0x3B, 0x50, 0x3B, 0x50, 0x3C, 0x50, 0x3D, 0x50, 0x3D, 0x50, 0x3E, 0x50, 0x3E, 0x50, 0x3F, 0x50, 0x3F, 0x50, 0x40, 0x50, 0x41, 0x51, 0x41, 0x51, 0x42, 0x51, 0x43, 0x51, 0x43, 0x51, 0x44, 0x51, 0x44, 0x51, 0x46, 0x51, 0x46, 0x51, 0x47, 0x51, 0x49, 0x51, 0x4A, 0x51, 0x4B, 0x51, 0x4D, 0x51, 0x4E, 0x51, 0x4F, 0x51, 0x50, 0x51, 0x51, 0x51, 0x52, 0x51, 0x54, 0x51, 0x55, 0x51, 0x55, 0x51, 0x57, 0x51, 0x57, 0x51, 0x58, 0x51, 0x58, 0x51, 0x59, 0x51, 0x59, 0x51, 0x5A, 0x51, 0x5A, 0x51, 0x5B, 0x51, 0x5C, 0x51, 0x5D, 0x51, 0x5D, 0x51, 0x5E, 0x51, 0x5E, 0x51, 0x5F, 0x51, 0x60, 0x51, 0x60, 0x51, 0x61, 0x51, 0x62, 0x51, 0x63, 0x51, 0x64, 0x51, 0x65, 0x51, 0x67, 0x51, 0x68, 0x51, 0x6A, 0x51, 0x6B, 0x50, 0x6C, 0x50, 0x6E, 0x50, 0x70, 0x50, 0x71, 0x50, 0x72, 0x50, 0x73, 0x50, 0x74, 0x50, 0x74, 0x4F, 0x75, 0x4F, 0x76, 0x4F, 0x76, 0x4F, 0x77, 0x4F, 0x77, 0x4F, 0x77, 0x4F, 0x78, 0x4F, 0x78, 0x4E, 0x79, 0x4E, 0x79, 0x4E, 0x7A, 0x4E, 0x7A, 0x4E, 0x7B, 0x4E, 0x7C, 0x4E, 0x7C, 0x4E, 0x7D, 0x4E, 0x7D, 0x4E, 0x7E, 0x4E, 0x7E, 0x4E, 0x7F, 0x4E, 0x7F, 0x4E, 0x80, 0x4E, 0x81, 0x4D, 0x81, 0x4D, 0x82, 0x4D, 0x82, 0x4D, 0x83, 0x4D, 0x83, 0x4D, 0x84, 0x4D, 0x84, 0x4D, 0x85, 0x4D, 0x85, 0x4D, 0x86, 0x4C, 0x87, 0x4C, 0x88, 0x4C, 0x89, 0x4C, 0x89, 0x4C, 0x8A, 0x4C, 0x8A, 0x4C, 0x8A, 0x4C, 0x8B, 0x4C, 0x8B, 0x4B, 0x8B, 0x4B, 0x8C, 0x4B, 0x8C, 0x4B, 0x8D, 0x4B, 0x8D, 0x4B, 0x8D, 0x4B, 0x8E, 0x4A, 0x8E, 0x4A, 0x8F, 0x4A, 0x90, 0x4A, 0x90, 0x4A, 0x91, 0x4A, 0x91, 0x4A, 0x92, 0x4A, 0x92, 0x49, 0x92, 0x49, 0x93, 0x49, 0x93, 0x48, 0x94, 0x48, 0x94, 0x48, 0x94, 0x48, 0x95, 0x47, 0x95, 0x47, 0x95, 0x47, 0x96, 0x46, 0x96, 0x46, 0x96, 0x46, 0x97, 0x45, 0x97, 0x45, 0x97, 0x44, 0x98, 0x44, 0x98, 0x43, 0x98, 0x43, 0x98, 0x43, 0x98, 0x42, 0x99, 0x42, 0x99, 0x41, 0x99, 0x40, 0x99, 0x3F, 0x99, 0x3F, 0x9A, 0x3E, 0x9A, 0x3E, 0x9A, 0x3D, 0x9A, 0x3D, 0x9B, 0x3C, 0x9B, 0x3C, 0x9B, 0x3B, 0x9B, 0x3B, 0x9B, 0x3A, 0x9B, 0x3A, 0x9B, 0x3A, 0x9B, 0x39, 0x9B, 0x39, 0x9C, 0x39, 0x9C, 0x38, 0x9C, 0x38, 0x9C, 0x37, 0x9C, 0x37, 0x9C, 0x36, 0x9C, 0x36, 0x9C, 0x35, 0x9C, 0x35, 0x9C, 0x34, 0x9C, 0x34, 0x9C, 0x33, 0x9C, 0x33, 0x9C, 0x32, 0x9C, 0x32, 0x9C, 0x31, 0x9C, 0x31, 0x9C, 0x30, 0x9C, 0x30, 0x9C, 0x2F, 0x9C, 0x2F, 0x9C, 0x2E, 0x9C, 0x2E, 0x9C, 0x2D, 0x9C, 0x2D, 0x9C, 0x2C, 0x9C, 0x2C, 0x9C, 0x2B, 0x9C, 0x2B, 0x9C, 0x2A, 0x9C, 0x2A, 0x9C, 0x29, 0x9C, 0x29, 0x9B, 0x28, 0x9B, 0x27, 0x9B, 0x27, 0x9B, 0x26, 0x9B, 0x26, 0x9B, 0x25, 0x9B, 0x24, 0x9B, 0x24, 0x9B, 0x23, 0x9B, 0x23, 0x9B, 0x22, 0x9B, 0x22, 0x9B, 0x21, 0x9B, 0x21, 0x9B, 0x20, 0x9A, 0x20, 0x9A, 0x20, 0x9A, 0x1F, 0x9A, 0x1F, 0x9A, 0x1E, 0x9A, 0x1D, 0x99, 0x1D, 0x99, 0x1D, 0x99, 0x1C, 0x99, 0x1C, 0x99, 0x1C, 0x99, 0x1B, 0x98, 0x1B, 0x98, 0x1A, 0x98, 0x1A, 0x97, 0x19, 0x97, 0x19, 0x97, 0x18, 0x96, 0x18, 0x96, 0x18, 0x96, 0x17, 0x95, 0x17, 0x95, 0x17, 0x94, 0x16, 0x94, 0x16, 0x94, 0x15, 0x94, 0x15, 0x93, 0x15, 0x93, 0x14, 0x93, 0x14, 0x92, 0x14, 0x92, 0x13, 0x91, 0x13, 0x91, 0x13, 0x90, 0x13, 0x90, 0x12, 0x90, 0x12, 0x8F, 0x11, 0x8F, 0x11, 0x8E, 0x11, 0x8E, 0x11, 0x8E, 0x10, 0x8D, 0x10, 0x8D, 0x10, 0x8C, 0x10, 0x8C, 0x0F, 0x8B, 0x0F, 0x8B, 0x0F, 0x8A, 0x0E, 0x8A, 0x0E, 0x89, 0x0E, 0x88, 0x0D, 0x87, 0x0D, 0x86, 0x0D, 0x85, 0x0C, 0x84, 0x0C, 0x84, 0x0C, 0x83, 0x0C, 0x82, 0x0C, 0x81, 0x0C, 0x81, 0x0C, 0x80, 0x0C, 0x7F, 0x0C, 0x7E, 0x0C, 0x7D, 0x0B, 0x7C, 0x0B, 0x7A, 0x0B, 0x79, 0x0B, 0x78, 0x0B, 0x77, 0x0B, 0x76, 0x0B, 0x76, 0x0B, 0x75, 0x0B, 0x74, 0x0B, 0x73, 0x0A, 0x72, 0x0A, 0x72, 0x0A, 0x71, 0x0A, 0x70, 0x0A, 0x6F, 0x0A, 0x6F, 0x0A, 0x6E, 0x0A, 0x6D, 0x09, 0x6D, 0x09, 0x6B, 0x09, 0x6B, 0x09, 0x6A, 0x09, 0x69, 0x08, 0x68, 0x08, 0x67, 0x08, 0x66, 0x08, 0x65, 0x08, 0x64, 0x08, 0x63, 0x07, 0x63, 0x07, 0x62, 0x07, 0x61, 0x06, 0x61, 0x06, 0x60, 0x06, 0x60, 0x06, 0x5F, 0x06, 0x5E, 0x06, 0x5D, 0x06, 0x5C, 0x06, 0x5C, 0x06, 0x5B, 0x06, 0x59, 0x06, 0x59, 0x06, 0x57, 0x06, 0x56, 0x06, 0x55, 0x06, 0x54, 0x06, 0x53, 0x06, 0x52, 0x06, 0x52, 0x06, 0x51, 0x06, 0x50, 0x06, 0x50, 0x06, 0x4F, 0x06, 0x4F, 0x06, 0x4E, 0x07, 0x4E, 0x07, 0x4E, 0x07, 0x4D, 0x07, 0x4D, 0x08, 0x4C, 0x09, 0x4C, 0x09, 0x4B, 0x09, 0x4B, 0x0A };
const unsigned char pattern_3[1060] PROGMEM = { 0x19, 0x0D, 0x19, 0x0D, 0x19, 0x0F, 0x19, 0x10, 0x19, 0x11, 0x19, 0x13, 0x19, 0x14, 0x19, 0x16, 0x19, 0x18, 0x19, 0x19, 0x19, 0x1A, 0x19, 0x1C, 0x19, 0x1D, 0x18, 0x1D, 0x18, 0x1F, 0x18, 0x20, 0x18, 0x20, 0x18, 0x21, 0x18, 0x22, 0x18, 0x23, 0x18, 0x24, 0x18, 0x25, 0x18, 0x25, 0x17, 0x27, 0x17, 0x28, 0x17, 0x28, 0x17, 0x29, 0x17, 0x2A, 0x17, 0x2A, 0x17, 0x2B, 0x17, 0x2C, 0x17, 0x2D, 0x17, 0x2E, 0x17, 0x2F, 0x17, 0x30, 0x17, 0x32, 0x17, 0x32, 0x17, 0x33, 0x17, 0x35, 0x17, 0x35, 0x17, 0x36, 0x17, 0x38, 0x17, 0x38, 0x17, 0x39, 0x17, 0x3B, 0x17, 0x3B, 0x17, 0x3C, 0x17, 0x3E, 0x17, 0x3E, 0x17, 0x3F, 0x17, 0x40, 0x17, 0x40, 0x17, 0x41, 0x17, 0x41, 0x18, 0x41, 0x18, 0x42, 0x18, 0x42, 0x18, 0x43, 0x18, 0x43, 0x18, 0x44, 0x18, 0x44, 0x18, 0x45, 0x18, 0x45, 0x18, 0x46, 0x18, 0x47, 0x18, 0x47, 0x18, 0x48, 0x18, 0x49, 0x18, 0x49, 0x18, 0x4A, 0x18, 0x4A, 0x18, 0x4B, 0x18, 0x4C, 0x18, 0x4D, 0x18, 0x4D, 0x18, 0x4E, 0x19, 0x4E, 0x19, 0x4E, 0x1A, 0x4E, 0x1A, 0x4E, 0x1B, 0x4E, 0x1C, 0x4E, 0x1D, 0x4E, 0x1E, 0x4D, 0x1F, 0x4D, 0x20, 0x4D, 0x22, 0x4D, 0x24, 0x4C, 0x24, 0x4C, 0x26, 0x4C, 0x26, 0x4C, 0x27, 0x4B, 0x28, 0x4B, 0x28, 0x4B, 0x28, 0x4B, 0x29, 0x4B, 0x29, 0x4B, 0x2A, 0x4A, 0x2A, 0x4A, 0x2B, 0x4A, 0x2B, 0x4A, 0x2C, 0x49, 0x2C, 0x49, 0x2D, 0x49, 0x2E, 0x49, 0x2F, 0x49, 0x2F, 0x49, 0x30, 0x48, 0x31, 0x48, 0x31, 0x48, 0x32, 0x48, 0x33, 0x48, 0x34, 0x47, 0x34, 0x47, 0x35, 0x47, 0x36, 0x47, 0x37, 0x47, 0x38, 0x47, 0x38, 0x47, 0x39, 0x46, 0x39, 0x46, 0x3A, 0x46, 0x3A, 0x46, 0x3A, 0x46, 0x3B, 0x46, 0x3B, 0x45, 0x3C, 0x45, 0x3D, 0x45, 0x3D, 0x45, 0x3E, 0x45, 0x3F, 0x44, 0x3F, 0x44, 0x40, 0x44, 0x40, 0x43, 0x41, 0x43, 0x42, 0x43, 0x42, 0x43, 0x42, 0x42, 0x43, 0x42, 0x44, 0x41, 0x45, 0x41, 0x46, 0x41, 0x46, 0x41, 0x47, 0x40, 0x47, 0x40, 0x48, 0x40, 0x48, 0x3F, 0x49, 0x3F, 0x4A, 0x3E, 0x4A, 0x3E, 0x4B, 0x3D, 0x4C, 0x3D, 0x4D, 0x3C, 0x4E, 0x3C, 0x4E, 0x3C, 0x50, 0x3B, 0x51, 0x3B, 0x52, 0x3A, 0x52, 0x3A, 0x53, 0x39, 0x54, 0x39, 0x54, 0x39, 0x55, 0x38, 0x55, 0x38, 0x56, 0x38, 0x56, 0x38, 0x57, 0x37, 0x57, 0x37, 0x58, 0x37, 0x58, 0x36, 0x59, 0x36, 0x59, 0x36, 0x5A, 0x36, 0x5A, 0x36, 0x5A, 0x35, 0x5B, 0x35, 0x5C, 0x35, 0x5D, 0x34, 0x5D, 0x34, 0x5D, 0x34, 0x5E, 0x33, 0x5F, 0x33, 0x60, 0x33, 0x61, 0x32, 0x62, 0x31, 0x62, 0x31, 0x63, 0x30, 0x64, 0x30, 0x65, 0x2F, 0x65, 0x2F, 0x66, 0x2E, 0x67, 0x2E, 0x68, 0x2D, 0x68, 0x2C, 0x69, 0x2C, 0x69, 0x2C, 0x6A, 0x2B, 0x6A, 0x2B, 0x6B, 0x2A, 0x6B, 0x2A, 0x6C, 0x2A, 0x6C, 0x29, 0x6D, 0x28, 0x6D, 0x28, 0x6E, 0x28, 0x6E, 0x27, 0x6F, 0x26, 0x70, 0x25, 0x71, 0x25, 0x72, 0x24, 0x73, 0x23, 0x74, 0x22, 0x75, 0x22, 0x75, 0x21, 0x75, 0x21, 0x76, 0x20, 0x76, 0x20, 0x77, 0x20, 0x77, 0x1F, 0x77, 0x1F, 0x77, 0x1F, 0x78, 0x1E, 0x78, 0x1E, 0x78, 0x1E, 0x79, 0x1E, 0x79, 0x1D, 0x79, 0x1D, 0x79, 0x1C, 0x7A, 0x1C, 0x7A, 0x1C, 0x7B, 0x1B, 0x7B, 0x1B, 0x7C, 0x1A, 0x7C, 0x1A, 0x7C, 0x19, 0x7D, 0x19, 0x7D, 0x19, 0x7E, 0x18, 0x7E, 0x18, 0x7F, 0x17, 0x7F, 0x17, 0x80, 0x16, 0x81, 0x16, 0x82, 0x15, 0x83, 0x14, 0x84, 0x13, 0x84, 0x13, 0x85, 0x12, 0x86, 0x11, 0x87, 0x11, 0x87, 0x11, 0x88, 0x11, 0x88, 0x11, 0x89, 0x10, 0x89, 0x10, 0x8A, 0x10, 0x8A, 0x10, 0x8B, 0x10, 0x8B, 0x10, 0x8D, 0x10, 0x8D, 0x10, 0x8F, 0x10, 0x91, 0x10, 0x92, 0x10, 0x93, 0x10, 0x94, 0x0F, 0x95, 0x0F, 0x95, 0x0F, 0x96, 0x0E, 0x96, 0x0E, 0x97, 0x0E, 0x97, 0x0E, 0x98, 0x0E, 0x98, 0x0D, 0x99, 0x0D, 0x99, 0x0D, 0x99, 0x0E, 0x99, 0x0E, 0x99, 0x0F, 0x99, 0x10, 0x99, 0x11, 0x99, 0x12, 0x99, 0x13, 0x99, 0x14, 0x99, 0x15, 0x98, 0x15, 0x98, 0x16, 0x98, 0x17, 0x98, 0x17, 0x98, 0x18, 0x98, 0x19, 0x97, 0x19, 0x97, 0x1A, 0x97, 0x1A, 0x97, 0x1B, 0x97, 0x1B, 0x97, 0x1C, 0x97, 0x1D, 0x97, 0x1E, 0x97, 0x1E, 0x97, 0x1F, 0x97, 0x1F, 0x97, 0x20, 0x97, 0x20, 0x97, 0x21, 0x97, 0x22, 0x97, 0x22, 0x97, 0x23, 0x97, 0x23, 0x97, 0x24, 0x97, 0x24, 0x97, 0x25, 0x97, 0x26, 0x97, 0x26, 0x97, 0x27, 0x97, 0x28, 0x97, 0x28, 0x97, 0x29, 0x97, 0x2A, 0x97, 0x2A, 0x97, 0x2B, 0x97, 0x2B, 0x97, 0x2C, 0x97, 0x2D, 0x97, 0x2D, 0x97, 0x2E, 0x97, 0x2E, 0x97, 0x2F, 0x97, 0x2F, 0x97, 0x30, 0x97, 0x30, 0x97, 0x31, 0x97, 0x31, 0x97, 0x32, 0x97, 0x32, 0x97, 0x33, 0x97, 0x34, 0x97, 0x34, 0x97, 0x35, 0x97, 0x35, 0x97, 0x36, 0x97, 0x36, 0x97, 0x37, 0x97, 0x37, 0x97, 0x38, 0x97, 0x38, 0x97, 0x39, 0x97, 0x39, 0x97, 0x3A, 0x97, 0x3A, 0x97, 0x3B, 0x97, 0x3B, 0x96, 0x3B, 0x96, 0x3C, 0x96, 0x3D, 0x96, 0x3E, 0x96, 0x3E, 0x96, 0x3F, 0x96, 0x40, 0x96, 0x40, 0x96, 0x41, 0x96, 0x41, 0x95, 0x41, 0x95, 0x42, 0x95, 0x42, 0x95, 0x43, 0x95, 0x43, 0x95, 0x44, 0x96, 0x45, 0x96, 0x46, 0x96, 0x48, 0x96, 0x48, 0x97, 0x49, 0x97, 0x49, 0x96, 0x49, 0x96, 0x49, 0x95, 0x49, 0x94, 0x49, 0x93, 0x49, 0x92, 0x49, 0x92, 0x49, 0x91, 0x49, 0x8F, 0x48, 0x8F, 0x48, 0x8D, 0x48, 0x8B, 0x47, 0x89, 0x47, 0x86, 0x46, 0x84, 0x45, 0x83, 0x45, 0x82, 0x44, 0x81, 0x44, 0x80, 0x43, 0x80, 0x43, 0x7F, 0x43, 0x7E, 0x42, 0x7D, 0x42, 0x7C, 0x41, 0x7B, 0x41, 0x7A, 0x40, 0x79, 0x40, 0x78, 0x3F, 0x77, 0x3F, 0x77, 0x3F, 0x77, 0x3F, 0x76, 0x3E, 0x75, 0x3E, 0x75, 0x3E, 0x73, 0x3D, 0x73, 0x3D, 0x71, 0x3D, 0x70, 0x3C, 0x6E, 0x3B, 0x6E, 0x3B, 0x6C, 0x3B, 0x6A, 0x3A, 0x69, 0x3A, 0x68, 0x39, 0x67, 0x39, 0x66, 0x38, 0x65, 0x38, 0x64, 0x38, 0x63, 0x37, 0x62, 0x37, 0x62, 0x36, 0x61, 0x36, 0x60, 0x36, 0x5F, 0x35, 0x5F, 0x35, 0x5E, 0x34, 0x5D, 0x34, 0x5B, 0x33, 0x5A, 0x33, 0x59, 0x32, 0x57, 0x32, 0x56, 0x31, 0x55, 0x30, 0x54, 0x30, 0x53, 0x30, 0x52, 0x2F, 0x50, 0x2E, 0x50, 0x2E, 0x4F, 0x2E, 0x4E, 0x2D, 0x4E, 0x2D, 0x4E, 0x2D, 0x4D, 0x2D, 0x4C, 0x2C, 0x4B, 0x2C, 0x4A, 0x2B, 0x4A, 0x2B, 0x49, 0x2B, 0x49, 0x2B, 0x48, 0x2A, 0x47, 0x29, 0x47, 0x29, 0x46, 0x29, 0x46, 0x29, 0x45, 0x28, 0x44, 0x28, 0x44, 0x27, 0x43, 0x27, 0x42, 0x27, 0x42, 0x26, 0x41, 0x26, 0x41, 0x25, 0x40, 0x25, 0x3F, 0x25, 0x3E, 0x24, 0x3D, 0x23, 0x3C, 0x23, 0x3B, 0x22, 0x3A, 0x21, 0x39, 0x20, 0x38, 0x20, 0x37, 0x1F, 0x36, 0x1F, 0x35, 0x1E, 0x34, 0x1E, 0x33, 0x1D, 0x33, 0x1D, 0x32, 0x1C, 0x31, 0x1C, 0x31, 0x1C, 0x30, 0x1B, 0x30, 0x1B, 0x2F, 0x1B, 0x2F, 0x1A, 0x2E, 0x1A, 0x2E, 0x19, 0x2D, 0x19, 0x2D, 0x19, 0x2D, 0x18, 0x2C, 0x18, 0x2B, 0x18, 0x2B, 0x17, 0x2A, 0x17, 0x2A, 0x16, 0x29, 0x16, 0x29, 0x16, 0x28, 0x15, 0x28, 0x15, 0x27, 0x15, 0x27, 0x14, 0x26, 0x14, 0x26, 0x14, 0x25, 0x13, 0x24, 0x13, 0x23, 0x12, 0x22, 0x12, 0x21, 0x12, 0x21, 0x11, 0x21, 0x11, 0x20, 0x11, 0x20, 0x11, 0x1F, 0x10, 0x1F, 0x10, 0x1E, 0x10, 0x1E, 0x0F, 0x1D, 0x0F, 0x1D, 0x0F, 0x1C, 0x0F, 0x1C, 0x0F, 0x1C, 0x0F, 0x1B, 0x0E, 0x1B, 0x0E, 0x1A, 0x0E, 0x1A, 0x0E, 0x19, 0x0E, 0x19, 0x0E };


class ServoControl
{
private:
	int pin_x_;
	int pin_y_;
	Servo servo_x_;
	Servo servo_y_;

	int no_;
	int index_;
	bool is_attached_;
	bool is_started_;
	long old_tick_;
	int count_;

public:
	ServoControl(int pin_x, int pin_y)
		: pin_x_(pin_x), pin_y_(pin_y), servo_x_(), servo_y_(),
		  no_(1), index_(0), is_attached_(false), is_started_(false), old_tick_(0), count_(0)
	{
	}

	void attach()
	{
    	if (is_attached_) return;

    	is_attached_ = true;

		servo_x_.attach(pin_x_);
		servo_y_.attach(pin_y_);
	}

	void detach()
	{
    	is_attached_ = false;

		servo_x_.detach();
		servo_y_.detach();
	}

	void start(int no)
	{
    	no_ = no;
		is_started_ = true;
		old_tick_ = 0;

    	attach();
	}

	void stop()
	{
		is_started_ = false;
    	detach();
	}

 	void gotoXY(int x, int y)
	{
		is_started_ = false;
		attach();
		servo_x_.write(x);
		servo_y_.write(y);
	}

	void execute(char ch)
	{
		switch (ch) {
			case 'A': start(1); break;
			case 'B': start(2); break;
			case 'C': start(3); break;
			case 'S': stop(); break;
		}

		if (is_started_ == false) return;

		long tick = millis();
		long term;
		if ((tick > old_tick_) && (old_tick_ != 0)) count_ = count_ + (tick - old_tick_);
		old_tick_ = tick;

		if (count_ < SPEED) return;
		count_ = 0;

	    int size;
	    switch (no_) {
			case 1: size = sizeof(pattern_1) / 2; break;
			case 2: size = sizeof(pattern_2) / 2; break;
			case 3: size = sizeof(pattern_3) / 2; break;
    	}

	    if (index_ >= size) index_ = 0;

	    int x;
	    int y;
	    switch (no_) {
			case 1: {
				x = pgm_read_byte(&pattern_1[index_ * 2]);
				y = pgm_read_byte(&pattern_1[(index_ * 2) + 1]);
			} break;

			case 2: {
				x = pgm_read_byte(&pattern_2[index_ * 2]);
				y = pgm_read_byte(&pattern_2[(index_ * 2) + 1]);
			} break;

			case 3: {
				x = pgm_read_byte(&pattern_3[index_ * 2]);
				y = pgm_read_byte(&pattern_3[(index_ * 2) + 1]);
			} break;
	    }

	    servo_x_.write(x);
	    servo_y_.write(y);

	    index_++;
	}
};


#endif // SERVOCONTROL_H
