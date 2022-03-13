#ifndef SSD1675_H
#define SSD1675_H

// Display resolution
#define EPD_WIDTH       122
#define EPD_HEIGHT      268

// EPD2IN9 commands

#define DRIVER_OUTPUT_CONTROL                       0x01
#define GATE_VOLTAGE_CONTROL                        0x03
#define SOURCE_VOLTAGE_CONTROL                      0x04
#define BOOSTER_SOFT_START_CONTROL                  0x0C
#define GATE_SCAN_START_POSITION                    0x0F
#define DEEP_SLEEP_MODE                             0x10
#define DATA_ENTRY_MODE_SETTING                     0x11
#define SW_RESET                                    0x12
#define TEMPERATURE_SENSOR_CONTROL                  0x1A
#define BUILTINTEMPERATURE_SENSOR_CONTROL           0x18
#define MASTER_ACTIVATION                           0x20
#define DISPLAY_UPDATE_CONTROL_1                    0x21
#define DISPLAY_UPDATE_CONTROL_2                    0x22
#define WRITE_RAM                                   0x24
#define WRITE_RAM2                                  0x26
#define WRITE_VCOM_REGISTER                         0x2C
#define WRITE_LUT_REGISTER                          0x32
#define PROGRAM_OTP_SELECTION                       0x36
#define OTP_SELECTION_CONTROL_1                     0x37
#define OTP_SELECTION_CONTROL_2                     0x38
#define SET_DUMMY_LINE_PERIOD                       0x3A
#define SET_GATE_TIME                               0x3B
#define BORDER_WAVEFORM_CONTROL                     0x3C
#define OPTION_LUT_END                              0x3F
#define SET_RAM_X_ADDRESS_START_END_POSITION        0x44
#define SET_RAM_Y_ADDRESS_START_END_POSITION        0x45
#define SET_RAM_X_ADDRESS_COUNTER                   0x4E
#define SET_RAM_Y_ADDRESS_COUNTER                   0x4F
#define TERMINATE_FRAME_READ_WRITE                  0xFF


extern const unsigned char lut_full_update[159];
extern const unsigned char lut_partial_update[159];

extern    unsigned long epd_width;
extern    unsigned long epd_height;

extern    void EpdInitFull(void);
extern    void EpdInitPartial(void);
extern    void EpdSendCommand(unsigned char command);
extern    void EpdSendData(unsigned char data);
extern    void WaitUntilIdle(void);
extern    void EpdReset(void);

extern    void EpdSetFrameMemoryXY(const unsigned char* image_buffer,int x, int y, int image_width, int image_height);

extern    void EpdSetFrameMemory(const unsigned char* image_buffer);
extern    void EpdSetFrameMemoryBase(const unsigned char* image_buffer);
extern    void EpdClearFrameMemory(unsigned char color);
extern    void EpdClearFrameMemoryF(unsigned char color);
extern    void EpdDisplayFrame(void);
extern    void EpdDisplayFramePartial(void);
extern    void EpdSleep(void);
extern    void EpdSetData_Image(const unsigned char* imgData, int x, int y, int Width, int Height, int colored);

extern    void EpdSetLut(const unsigned char *lut);
extern    void EpdSetLutFull(const unsigned char *lut);
extern    void EpdSetMemoryArea(int x_start, int y_start, int x_end, int y_end);
extern    void EpdSetMemoryPointer(int x, int y);

#endif /* SSD1675_H */

/* END OF FILE */