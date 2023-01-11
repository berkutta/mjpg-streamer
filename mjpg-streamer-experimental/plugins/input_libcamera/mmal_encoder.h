#ifndef MMAL_ENCODER_H_
#define MMAL_ENCODER_H_

#ifdef __cplusplus
extern "C" {
#endif

int start_mmal_encoder(int width, int height);
void mmal_new_data(char *buffer, size_t length);

#ifdef __cplusplus
}
#endif

#endif
