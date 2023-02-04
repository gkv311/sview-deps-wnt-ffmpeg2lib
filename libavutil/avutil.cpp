#include "defines.h"
#include "avutil.h"

FFEXPORT unsigned avutil_version() FFBODYNULL
FFEXPORT const char* avutil_license() FFBODYNULL
FFEXPORT const char* av_version_info() FFBODYNULL

FFEXPORT int64_t ff_gcd(int64_t a, int64_t b) FFBODYNULL
FFEXPORT int64_t av_gcd(int64_t a, int64_t b) FFBODYNULL
FFEXPORT int64_t av_rescale(int64_t a, int64_t b, int64_t c) FFBODYNULL
FFEXPORT int64_t av_rescale_rnd(int64_t a, int64_t b, int64_t c, enum AVRounding) FFBODYNULL
FFEXPORT int64_t av_rescale_q(int64_t a, AVRational bq, AVRational cq) FFBODYNULL
FFEXPORT int64_t av_rescale_q_rnd(int64_t a, AVRational bq, AVRational cq,
                                  enum AVRounding) FFBODYNULL;

FFEXPORT int av_reduce(int *dst_nom, int *dst_den, int64_t nom, int64_t den, int64_t max) FFBODYNULL

FFEXPORT AVRational av_mul_q(AVRational b, AVRational c) { return AVRational(); }
FFEXPORT AVRational av_div_q(AVRational b, AVRational c) { return AVRational(); }
FFEXPORT AVRational av_add_q(AVRational b, AVRational c) { return AVRational(); }
FFEXPORT AVRational av_sub_q(AVRational b, AVRational c) { return AVRational(); }
FFEXPORT AVRational av_d2q(double d, int max) { return AVRational(); }
FFEXPORT int av_nearer_q(AVRational q, AVRational q1, AVRational q2) FFBODYNULL
FFEXPORT int av_find_nearest_q_idx(AVRational q, const AVRational* q_list) FFBODYNULL

FFEXPORT double     av_int2dbl(int64_t v) FFBODYNULL
FFEXPORT float      av_int2flt(int32_t v) FFBODYNULL
FFEXPORT double     av_ext2dbl(const AVExtFloat ext) FFBODYNULL
FFEXPORT int64_t    av_dbl2int(double d)  FFBODYNULL
FFEXPORT int32_t    av_flt2int(float d)   FFBODYNULL
FFEXPORT AVExtFloat av_dbl2ext(double d) { return AVExtFloat(); }

FFEXPORT void av_log(void* , int level, const char* fmt, ...) FFBODYVOID

FFEXPORT void av_vlog(void* , int level, const char* fmt, va_list) FFBODYVOID
FFEXPORT int av_log_get_level() FFBODYNULL
FFEXPORT void av_log_set_level(int) FFBODYVOID
FFEXPORT void av_log_set_callback(void (*)(void* , int, const char* , va_list)) FFBODYVOID
FFEXPORT void av_log_default_callback(void* ptr, int level, const char* fmt, va_list vl) FFBODYVOID

FFEXPORT void* av_malloc(unsigned int size) FFBODYNULL
FFEXPORT void* av_realloc(void* ptr, unsigned int size) FFBODYNULL
FFEXPORT void  av_free(void* ptr) FFBODYVOID
FFEXPORT void* av_mallocz(unsigned int size) FFBODYNULL
FFEXPORT char* av_strdup(const char* s)  FFBODYNULL
FFEXPORT void  av_freep(void* ptr) FFBODYVOID

FFEXPORT enum PixelFormat av_get_pix_fmt(const char* name) { return PixelFormat(0); }
FFEXPORT const char *av_get_pix_fmt_name(enum AVPixelFormat pix_fmt) FFBODYNULL

FFEXPORT enum AVSampleFormat av_get_sample_fmt(const char* name) { return AVSampleFormat(0); }
FFEXPORT const char* av_get_sample_fmt_name(enum AVSampleFormat sample_fmt) FFBODYNULL
FFEXPORT int av_sample_fmt_is_planar(enum AVSampleFormat sample_fmt) FFBODYNULL
FFEXPORT int av_samples_get_buffer_size(int* linesize, int nb_channels, int nb_samples,
                                        enum AVSampleFormat sample_fmt, int align) FFBODYNULL
FFEXPORT void av_get_channel_layout_string(char* buf, int buf_size,
                                           int nb_channels, uint64_t channel_layout) FFBODYVOID

struct AVDictionary;
struct AVDictionaryEntry;
FFEXPORT AVDictionaryEntry* av_dict_get(AVDictionary* m, const char* key, const AVDictionaryEntry* prev, int flags) FFBODYNULL
FFEXPORT int av_dict_set(AVDictionary** pm, const char* key, const char* value, int flags) FFBODYNULL
FFEXPORT void av_dict_copy(AVDictionary** dst, AVDictionary* src, int flags) FFBODYVOID
FFEXPORT void av_dict_free(AVDictionary** m) FFBODYVOID

FFEXPORT int av_strerror(int errnum, char* errbuf, size_t errbuf_size) FFBODYNULL

struct AVFrame; struct AVFrameSideData;
FFEXPORT int64_t av_frame_get_best_effort_timestamp(const AVFrame* frame) FFBODYNULL
FFEXPORT void    av_frame_set_best_effort_timestamp(AVFrame* frame, int64_t val) FFBODYVOID
FFEXPORT int64_t av_frame_get_pkt_duration         (const AVFrame* frame) FFBODYNULL
FFEXPORT void    av_frame_set_pkt_duration         (AVFrame* frame, int64_t val) FFBODYVOID
FFEXPORT int64_t av_frame_get_pkt_pos              (const AVFrame* frame) FFBODYNULL
FFEXPORT void    av_frame_set_pkt_pos              (AVFrame* frame, int64_t val) FFBODYVOID
FFEXPORT int     av_frame_get_sample_rate          (const AVFrame* frame) FFBODYNULL
FFEXPORT void    av_frame_set_sample_rate          (AVFrame* frame, int     val) FFBODYVOID
FFEXPORT AVDictionary* av_frame_get_metadata       (const AVFrame* frame) FFBODYNULL
FFEXPORT void          av_frame_set_metadata       (AVFrame* frame, AVDictionary* val) FFBODYVOID
FFEXPORT AVFrameSideData* av_frame_get_side_data(const AVFrame* frame, enum AVFrameSideDataType type) FFBODYNULL

FFEXPORT AVFrame* av_frame_alloc() FFBODYNULL
FFEXPORT void av_frame_free(AVFrame** frame) FFBODYVOID
FFEXPORT int av_frame_get_buffer(AVFrame *frame, int align) FFBODYNULL
FFEXPORT int av_frame_copy_props(AVFrame *dst, const AVFrame *src) FFBODYNULL

FFEXPORT int av_frame_ref(AVFrame* dst, AVFrame* src) FFBODYNULL
FFEXPORT void av_frame_unref(AVFrame* frame) FFBODYVOID
FFEXPORT void av_frame_move_ref(AVFrame *dst, AVFrame *src) FFBODYVOID
FFEXPORT AVFrame* av_frame_clone(AVFrame* src) FFBODYNULL
FFEXPORT int av_frame_is_writable(AVFrame *frame) FFBODYNULL
FFEXPORT int av_frame_make_writable(AVFrame *frame) FFBODYNULL

FFEXPORT AVBufferRef *av_buffer_create(uint8_t *data, int size,
                                       void (*free)(void *opaque, uint8_t *data),
                                       void *opaque, int flags) FFBODYNULL

struct AVBufferPool;
FFEXPORT AVBufferPool *av_buffer_pool_init(int size, AVBufferRef* (*alloc)(int size)) FFBODYNULL
FFEXPORT void av_buffer_pool_uninit(AVBufferPool **pool)FFBODYVOID
FFEXPORT AVBufferRef *av_buffer_pool_get(AVBufferPool *pool) FFBODYNULL

struct AVPixFmtDescriptor;
FFEXPORT void av_image_fill_max_pixsteps(int max_pixsteps[4], int max_pixstep_comps[4], const AVPixFmtDescriptor* pixdesc) FFBODYVOID
FFEXPORT int av_image_get_linesize(enum AVPixelFormat pix_fmt, int width, int plane) FFBODYNULL
FFEXPORT int av_image_fill_linesizes(int linesizes[4], enum AVPixelFormat pix_fmt, int width) FFBODYNULL
FFEXPORT int av_image_fill_pointers(uint8_t* data[4], enum AVPixelFormat pix_fmt, int height, uint8_t* ptr, const int linesizes[4]) FFBODYNULL
FFEXPORT int av_image_alloc(uint8_t* pointers[4], int linesizes[4], int w, int h, enum AVPixelFormat pix_fmt, int align) FFBODYNULL
FFEXPORT void av_image_copy_plane(uint8_t* dst, int dst_linesize, const uint8_t* src, int src_linesize, int bytewidth, int height) FFBODYVOID
FFEXPORT void av_image_copy(uint8_t* dst_data[4], int dst_linesizes[4], const uint8_t* src_data[4], const int src_linesizes[4], enum AVPixelFormat pix_fmt, int width, int height) FFBODYVOID
FFEXPORT void av_image_copy_uc_from(uint8_t* dst_data[4], const ptrdiff_t dst_linesizes[4], const uint8_t* src_data[4], const ptrdiff_t src_linesizes[4], enum AVPixelFormat pix_fmt, int width, int height) FFBODYVOID
FFEXPORT int av_image_fill_arrays(uint8_t* dst_data[4], int dst_linesize[4], const uint8_t* src, enum AVPixelFormat pix_fmt, int width, int height, int align) FFBODYNULL
FFEXPORT int av_image_get_buffer_size(enum AVPixelFormat pix_fmt, int width, int height, int align) FFBODYNULL
FFEXPORT int av_image_copy_to_buffer(uint8_t* dst, int dst_size, const uint8_t* const src_data[4], const int src_linesize[4], enum AVPixelFormat pix_fmt, int width, int height, int align) FFBODYNULL
FFEXPORT int av_image_check_size(unsigned int w, unsigned int h, int log_offset, void *log_ctx) FFBODYNULL
FFEXPORT int av_image_check_size2(unsigned int w, unsigned int h, int64_t max_pixels, enum AVPixelFormat pix_fmt, int log_offset, void* log_ctx) FFBODYNULL
FFEXPORT int av_image_check_sar(unsigned int w, unsigned int h, AVRational sar) FFBODYNULL

struct AVStereo3D;
FFEXPORT AVStereo3D *av_stereo3d_alloc() FFBODYNULL
FFEXPORT AVStereo3D *av_stereo3d_create_side_data(AVFrame* frame) FFBODYNULL

FFEXPORT double av_display_rotation_get(const int32_t matrix[9]) FFBODYNULL
FFEXPORT void av_display_rotation_set(int32_t matrix[9], double angle) FFBODYVOID
FFEXPORT void av_display_matrix_flip(int32_t matrix[9], int hflip, int vflip) FFBODYVOID

struct AVChannelLayout;
FFEXPORT int64_t av_frame_get_channel_layout(const AVFrame* frame) FFBODYNULL
FFEXPORT void    av_frame_set_channel_layout(AVFrame* frame, int64_t val) FFBODYVOID
FFEXPORT int     av_frame_get_channels(const AVFrame* frame) FFBODYNULL
FFEXPORT void    av_frame_set_channels(AVFrame* frame, int     val) FFBODYVOID
FFEXPORT int     av_channel_layout_describe(const AVChannelLayout *channel_layout, char *buf, size_t buf_size) FFBODYNULL
