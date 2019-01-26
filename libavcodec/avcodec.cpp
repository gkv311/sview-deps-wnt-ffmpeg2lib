#include "defines.h"
#include "avcodec.h"

FFEXPORT ReSampleContext* av_audio_resample_init(int output_channels, int input_channels,
                                                 int output_rate, int input_rate,
                                                 enum SampleFormat sample_fmt_out,
                                                 enum SampleFormat sample_fmt_in,
                                                 int filter_length, int log2_phase_count,
                                                 int linear, double cutoff) FFBODYNULL

FFEXPORT int audio_resample(ReSampleContext* s, short* output, short* input, int nb_samples) FFBODYNULL
FFEXPORT void audio_resample_close(ReSampleContext* s) FFBODYVOID

FFEXPORT struct AVResampleContext* av_resample_init(int out_rate, int in_rate, int filter_length, int log2_phase_count, int linear, double cutoff) FFBODYNULL
FFEXPORT int av_resample(struct AVResampleContext* c, short* dst, short* src, int* consumed, int src_size, int dst_size, int update_ctx) FFBODYNULL
FFEXPORT void av_resample_compensate(struct AVResampleContext* c, int sample_delta, int compensation_distance) FFBODYVOID
FFEXPORT void av_resample_close(struct AVResampleContext* c) FFBODYVOID

FFEXPORT int avpicture_alloc(AVPicture* picture, int pix_fmt, int width, int height) FFBODYNULL

FFEXPORT void avpicture_free(AVPicture* picture) FFBODYVOID

FFEXPORT int avpicture_fill(AVPicture* picture, uint8_t* ptr,
                            int pix_fmt, int width, int height) FFBODYNULL
FFEXPORT int avpicture_layout(const AVPicture* src, int pix_fmt, int width, int height,
                              unsigned char *dest, int dest_size) FFBODYNULL

FFEXPORT int avpicture_get_size(int pix_fmt, int width, int height) FFBODYNULL
FFEXPORT void avcodec_get_chroma_sub_sample(int pix_fmt, int* h_shift, int* v_shift) FFBODYVOID
FFEXPORT const char* avcodec_get_pix_fmt_name(int pix_fmt) FFBODYNULL
FFEXPORT void avcodec_set_dimensions(AVCodecContext* s, int width, int height) FFBODYVOID
FFEXPORT enum PixelFormat avcodec_get_pix_fmt(const char* name) { return (enum PixelFormat)0; }
FFEXPORT unsigned int avcodec_pix_fmt_to_codec_tag(enum PixelFormat p) FFBODYNULL

FFEXPORT int avcodec_get_pix_fmt_loss(int dst_pix_fmt, int src_pix_fmt, int has_alpha) FFBODYNULL

FFEXPORT int avcodec_find_best_pix_fmt(int64_t pix_fmt_mask, int src_pix_fmt,
                                       int has_alpha, int* loss_ptr) FFBODYNULL

FFEXPORT void avcodec_pix_fmt_string (char* buf, int buf_size, int pix_fmt) FFBODYVOID

FFEXPORT int img_get_alpha_info(const AVPicture* src, int pix_fmt, int width, int height) FFBODYNULL

FFEXPORT int avpicture_deinterlace(AVPicture* dst, const AVPicture* src,
                                   int pix_fmt, int width, int height) FFBODYNULL

FFEXPORT AVCodec* av_codec_next(AVCodec* c) FFBODYNULL

FFEXPORT unsigned avcodec_version() FFBODYNULL

FFEXPORT void avcodec_init() FFBODYVOID

FFEXPORT void avcodec_register(AVCodec* codec) FFBODYVOID

FFEXPORT AVCodec* avcodec_find_encoder(enum CodecID id) FFBODYNULL
FFEXPORT AVCodec* avcodec_find_encoder_by_name(const char* name) FFBODYNULL
FFEXPORT AVCodec* avcodec_find_decoder(enum CodecID id) FFBODYNULL
FFEXPORT AVCodec* avcodec_find_decoder_by_name(const char* name) FFBODYNULL
FFEXPORT void avcodec_string(char* buf, int buf_size, AVCodecContext* enc, int encode) FFBODYVOID

FFEXPORT void avcodec_get_context_defaults(AVCodecContext* s) FFBODYVOID
FFEXPORT void avcodec_get_context_defaults2(AVCodecContext* s, enum CodecType) FFBODYVOID
FFEXPORT enum AVMediaType avcodec_get_type(enum AVCodecID codec_id) { return (enum AVMediaType)0; }
FFEXPORT const char* avcodec_get_name(enum AVCodecID id) FFBODYNULL

FFEXPORT AVCodecContext* avcodec_alloc_context() FFBODYNULL
FFEXPORT AVCodecContext* avcodec_alloc_context2(enum CodecType) FFBODYNULL
FFEXPORT AVCodecContext* avcodec_alloc_context3(const AVCodec* codec) FFBODYNULL
FFEXPORT void avcodec_free_context(AVCodecContext** avctx) FFBODYVOID

FFEXPORT void avcodec_get_frame_defaults(AVFrame* pic) FFBODYVOID

FFEXPORT AVFrame* avcodec_alloc_frame() FFBODYNULL

FFEXPORT int  avcodec_default_get_buffer2(AVCodecContext *s, AVFrame *frame, int flags) FFBODYNULL
FFEXPORT int  avcodec_default_get_buffer(AVCodecContext* s, AVFrame* pic) FFBODYNULL
FFEXPORT void avcodec_default_release_buffer(AVCodecContext* s, AVFrame* pic) FFBODYVOID
FFEXPORT int  avcodec_default_reget_buffer(AVCodecContext* s, AVFrame* pic) FFBODYNULL
FFEXPORT void avcodec_align_dimensions(AVCodecContext* s, int* width, int* height) FFBODYVOID

FFEXPORT int avcodec_check_dimensions(void* av_log_ctx, unsigned int w, unsigned int h) FFBODYNULL
FFEXPORT enum PixelFormat avcodec_default_get_format(struct AVCodecContext* s, const enum PixelFormat* fmt) { return (enum PixelFormat)0; }

FFEXPORT int  avcodec_thread_init(AVCodecContext* s, int thread_count) FFBODYNULL
FFEXPORT void avcodec_thread_free(AVCodecContext* s) FFBODYVOID
FFEXPORT int  avcodec_thread_execute (AVCodecContext* s, int (*func)(AVCodecContext* c2, void* arg2), void* arg, int* ret, int count, int size) FFBODYNULL
FFEXPORT int  avcodec_default_execute(AVCodecContext* c, int (*func)(AVCodecContext* c2, void* arg2), void* arg, int* ret, int count, int size) FFBODYNULL

FFEXPORT int  avcodec_open (AVCodecContext* avctx, AVCodec* codec) FFBODYNULL
FFEXPORT int  avcodec_open2(AVCodecContext* avctx, const AVCodec* codec, AVDictionary** options) FFBODYNULL

FFEXPORT int avcodec_send_packet(AVCodecContext* avctx, const AVPacket* avpkt) FFBODYNULL
FFEXPORT int avcodec_receive_frame(AVCodecContext* avctx, AVFrame* frame) FFBODYNULL
FFEXPORT int avcodec_send_frame(AVCodecContext* avctx, const AVFrame* frame) FFBODYNULL
FFEXPORT int avcodec_receive_packet(AVCodecContext* avctx, AVPacket* avpkt) FFBODYNULL
// obsolete
FFEXPORT int  avcodec_decode_audio2(AVCodecContext* avctx, int16_t* samples,
                                    int* frame_size_ptr,
                                    const uint8_t* buf, int buf_size) FFBODYNULL

FFEXPORT int avcodec_decode_audio3(AVCodecContext* avctx, int16_t* samples,
                                   int* frame_size_ptr,
                                   AVPacket* avpkt) FFBODYNULL

FFEXPORT int avcodec_decode_audio4(AVCodecContext* avctx, AVFrame* frame,
                                   int* got_frame_ptr, AVPacket* avpkt) FFBODYNULL

FFEXPORT int avcodec_decode_video(AVCodecContext* avctx, AVFrame* picture,
                                  int* got_picture_ptr,
                                  const uint8_t* buf, int buf_size) FFBODYNULL

FFEXPORT int avcodec_decode_video2(AVCodecContext* avctx, AVFrame* picture,
                                   int* got_picture_ptr,
                                   AVPacket* avpkt) FFBODYNULL

FFEXPORT int avcodec_decode_subtitle(AVCodecContext* avctx, AVSubtitle* sub,
                                     int* got_sub_ptr,
                                     const uint8_t* buf, int buf_size) FFBODYNULL

FFEXPORT int avcodec_decode_subtitle2(AVCodecContext* avctx, AVSubtitle* sub,
                                      int* got_sub_ptr,
                                      AVPacket* avpkt) FFBODYNULL

FFEXPORT void avsubtitle_free(AVSubtitle *sub) FFBODYVOID

FFEXPORT int avcodec_parse_frame(AVCodecContext* avctx, uint8_t** pdata,
                                 int* data_size_ptr,
                                 uint8_t* buf, int buf_size) FFBODYNULL

FFEXPORT int avcodec_encode_audio(AVCodecContext* avctx, uint8_t* buf, int buf_size,
                                  const short* samples) FFBODYNULL

FFEXPORT int avcodec_encode_video(AVCodecContext* avctx, uint8_t* buf, int buf_size,
                                  const AVFrame* pict) FFBODYNULL
FFEXPORT int avcodec_encode_video2(AVCodecContext* avctx, AVPacket* avpkt,
                                   const AVFrame* frame, int* got_packet_ptr) FFBODYNULL

FFEXPORT int avcodec_encode_subtitle(AVCodecContext* avctx, uint8_t* buf, int buf_size,
                                     const AVSubtitle* sub) FFBODYNULL

FFEXPORT int avcodec_close(AVCodecContext* avctx) FFBODYNULL

FFEXPORT void avcodec_register_all() FFBODYVOID

FFEXPORT void avcodec_flush_buffers(AVCodecContext* avctx) FFBODYVOID

FFEXPORT void avcodec_default_free_buffers(AVCodecContext* s) FFBODYVOID

FFEXPORT char av_get_pict_type_char(int pict_type) FFBODYNULL

FFEXPORT int av_get_bits_per_sample(enum CodecID codec_id) FFBODYNULL

FFEXPORT int av_get_bits_per_sample_format(enum SampleFormat sample_fmt) FFBODYNULL

FFEXPORT AVCodecParser* av_parser_next(AVCodecParser* c) FFBODYNULL

FFEXPORT void av_register_codec_parser(AVCodecParser* parser) FFBODYVOID
FFEXPORT AVCodecParserContext* av_parser_init(int codec_id) FFBODYNULL
FFEXPORT int av_parser_parse(AVCodecParserContext* s,
                             AVCodecContext* avctx,
                             uint8_t** poutbuf, int* poutbuf_size,
                             const uint8_t* buf, int buf_size,
                             int64_t pts, int64_t dts) FFBODYNULL
FFEXPORT int av_parser_parse2(AVCodecParserContext* s,
                              AVCodecContext* avctx,
                              uint8_t** poutbuf, int* poutbuf_size,
                              const uint8_t* buf, int buf_size,
                              int64_t pts, int64_t dts,
                              int64_t pos) FFBODYNULL
FFEXPORT int av_parser_change(AVCodecParserContext* s,
                              AVCodecContext* avctx,
                              uint8_t** poutbuf, int* poutbuf_size,
                              const uint8_t* buf, int buf_size, int keyframe) FFBODYNULL
FFEXPORT void av_parser_close(AVCodecParserContext* s) FFBODYVOID

FFEXPORT void av_register_bitstream_filter(AVBitStreamFilter* bsf) FFBODYVOID
FFEXPORT AVBitStreamFilterContext* av_bitstream_filter_init(const char* name) FFBODYNULL
FFEXPORT int av_bitstream_filter_filter(AVBitStreamFilterContext* bsfc,
                                        AVCodecContext* avctx, const char* args,
                                        uint8_t** poutbuf, int* poutbuf_size,
                                        const uint8_t* buf, int buf_size, int keyframe) FFBODYNULL
FFEXPORT void av_bitstream_filter_close(AVBitStreamFilterContext* bsf) FFBODYVOID

FFEXPORT AVBitStreamFilter* av_bitstream_filter_next(AVBitStreamFilter* f) FFBODYNULL

FFEXPORT void* av_fast_realloc(void* ptr, unsigned int* size, unsigned int min_size) FFBODYNULL

FFEXPORT void av_picture_copy(AVPicture* dst, const AVPicture* src,
                              int pix_fmt, int width, int height) FFBODYVOID

FFEXPORT int av_picture_crop(AVPicture* dst, const AVPicture* src,
                             int pix_fmt, int top_band, int left_band) FFBODYNULL

FFEXPORT int av_picture_pad(AVPicture* dst, const AVPicture* src, int height, int width, int pix_fmt,
                            int padtop, int padbottom, int padleft, int padright, int *color) FFBODYNULL

FFEXPORT unsigned int av_xiphlacing(unsigned char* s, unsigned int v) FFBODYNULL

FFEXPORT int av_parse_video_frame_size(int* width_ptr, int* height_ptr, const char* str) FFBODYNULL
FFEXPORT int av_parse_video_frame_rate(AVRational* frame_rate, const char* str) FFBODYNULL

FFEXPORT void av_register_hwaccel(AVHWAccel* hwaccel) FFBODYVOID
FFEXPORT AVHWAccel* av_hwaccel_next(AVHWAccel* hwaccel) FFBODYNULL

FFEXPORT int av_lockmgr_register(int (*cb)(void** mutex, enum AVLockOp op)) FFBODYNULL

FFEXPORT AVPacket* av_packet_alloc() FFBODYNULL
FFEXPORT AVPacket* av_packet_clone(const AVPacket* src) FFBODYNULL
FFEXPORT void av_packet_free(AVPacket** pkt) FFBODYVOID
FFEXPORT void av_init_packet(AVPacket* pkt) FFBODYVOID
FFEXPORT int av_new_packet(AVPacket* pkt, int size) FFBODYNULL
FFEXPORT void av_shrink_packet(AVPacket* pkt, int size) FFBODYVOID
FFEXPORT int av_grow_packet(AVPacket* pkt, int grow_by) FFBODYNULL
FFEXPORT int av_packet_from_data(AVPacket* pkt, uint8_t* data, int size) FFBODYNULL
FFEXPORT int av_copy_packet(AVPacket *dst, const AVPacket* src) FFBODYNULL
FFEXPORT int av_copy_packet_side_data(AVPacket* dst, const AVPacket* src) FFBODYNULL
FFEXPORT uint8_t* av_packet_new_side_data(AVPacket* pkt, enum AVPacketSideDataType type, int size) FFBODYNULL
FFEXPORT int av_packet_add_side_data(AVPacket* pkt, enum AVPacketSideDataType type, uint8_t* data, size_t size) FFBODYNULL
FFEXPORT int av_packet_shrink_side_data(AVPacket* pkt, enum AVPacketSideDataType type, int size) FFBODYNULL
FFEXPORT uint8_t* av_packet_get_side_data(const AVPacket* pkt, enum AVPacketSideDataType type, int* size) FFBODYNULL
FFEXPORT const char* av_packet_side_data_name(enum AVPacketSideDataType type) FFBODYNULL
FFEXPORT uint8_t* av_packet_pack_dictionary(AVDictionary* dict, int* size) FFBODYNULL
FFEXPORT int av_packet_unpack_dictionary(const uint8_t* data, int size, AVDictionary** dict) FFBODYNULL
FFEXPORT void av_packet_free_side_data(AVPacket* pkt) FFBODYVOID
FFEXPORT int av_packet_ref(AVPacket* dst, const AVPacket* src) FFBODYNULL
FFEXPORT void av_packet_unref(AVPacket* pkt) FFBODYVOID
FFEXPORT void av_packet_move_ref(AVPacket* dst, AVPacket* src) FFBODYVOID
FFEXPORT int av_packet_copy_props(AVPacket* dst, const AVPacket* src) FFBODYNULL
FFEXPORT void av_packet_rescale_ts(AVPacket* pkt, AVRational tb_src, AVRational tb_dst) FFBODYVOID

FFEXPORT void av_free_packet(AVPacket* pkt) FFBODYVOID

FFEXPORT int avcodec_copy_context(AVCodecContext *dest, const AVCodecContext *src) FFBODYNULL
