
#ifndef _AD7770_H    
#define _AD7770_H

extern void adc_config();

extern char adc_read(char address);
extern char adc_write(char address, char value);

extern void adc_set_high_power();
extern void adc_set_reference_internal();
extern void adc_set_decimation(int decimation);
extern void adc_enable_readout(char enable);
extern void adc_read_samples(uint32_t* data);
extern uint8_t adc_check_samples(uint32_t* data);
extern void adc_convert_samples(uint32_t* data, float* floatData);
extern void adc_streaming_start(char channels);
extern void adc_streaming_stop();

extern uint32_t last_samples[8];

#endif