#include "defines.h"
#include "avformat.h"

FFEXPORT unsigned avformat_version() FFBODYNULL

FFEXPORT int avformat_network_init()   FFBODYNULL
FFEXPORT int avformat_network_deinit() FFBODYNULL

FFEXPORT AVMetadataTag* av_metadata_get(AVMetadata* m, const char* key, const AVMetadataTag* prev, int flags) FFBODYNULL

FFEXPORT int av_metadata_set(AVMetadata** pm, const char* key, const char* value) FFBODYNULL

FFEXPORT void av_metadata_conv(struct AVFormatContext* ctx,const AVMetadataConv* d_conv,
                               const AVMetadataConv* s_conv) FFBODYVOID

FFEXPORT void av_metadata_free(AVMetadata** m) FFBODYVOID

FFEXPORT void av_destruct_packet_nofree(AVPacket* pkt) FFBODYVOID
FFEXPORT void av_destruct_packet(AVPacket* pkt) FFBODYVOID
//FFEXPORT void av_init_packet(AVPacket* pkt) FFBODYVOID
FFEXPORT int av_new_packet(AVPacket* pkt, int size) FFBODYNULL
FFEXPORT int av_get_packet(ByteIOContext* s, AVPacket* pkt, int size) FFBODYNULL
FFEXPORT int av_dup_packet(AVPacket* pkt) FFBODYNULL

FFEXPORT AVInputFormat*  av_iformat_next(AVInputFormat* f)  FFBODYNULL
FFEXPORT AVOutputFormat* av_oformat_next(AVOutputFormat* f) FFBODYNULL

FFEXPORT enum CodecID av_guess_image2_codec(const char* filename) {return (enum CodecID)0;}

FFEXPORT void av_register_input_format(AVInputFormat* format) FFBODYVOID
FFEXPORT void av_register_output_format(AVOutputFormat* format) FFBODYVOID
FFEXPORT AVOutputFormat* guess_stream_format(const char*short_name,
                                             const char* filename,
                                             const char* mime_type) FFBODYNULL
//FFEXPORT AVOutputFormat* guess_format(const char* short_name,
//                                      const char* filename,
//                                      const char* mime_type) FFBODYNULL
FFEXPORT AVOutputFormat *av_guess_format(const char *short_name,
                                         const char *filename,
                                         const char *mime_type) FFBODYNULL

FFEXPORT enum CodecID av_guess_codec(AVOutputFormat* fmt, const char* short_name,
                                     const char* filename, const char* mime_type,
                                     enum CodecType type) {return (enum CodecID)0;}

FFEXPORT void av_hex_dump(FILE* f, uint8_t* buf, int size) FFBODYVOID
FFEXPORT void av_hex_dump_log(void* avcl, int level, uint8_t* buf, int size) FFBODYVOID
FFEXPORT void av_pkt_dump(FILE* f, AVPacket* pkt, int dump_payload) FFBODYVOID
FFEXPORT void av_pkt_dump_log(void* avcl, int level, AVPacket* pkt, int dump_payload) FFBODYVOID

FFEXPORT void av_register_all() FFBODYVOID

FFEXPORT enum CodecID av_codec_get_id(const struct AVCodecTag * const *tags, unsigned int tag) {return (enum CodecID)0;}
FFEXPORT unsigned int av_codec_get_tag(const struct AVCodecTag * const *tags, enum CodecID id) FFBODYNULL

FFEXPORT AVInputFormat* av_find_input_format(const char* short_name) FFBODYNULL
FFEXPORT AVInputFormat* av_probe_input_format(AVProbeData* pd, int is_opened) FFBODYNULL

FFEXPORT int av_open_input_stream(AVFormatContext** ic_ptr,
                                  ByteIOContext* pb, const char* filename,
                                  AVInputFormat* fmt, AVFormatParameters* ap) FFBODYNULL

FFEXPORT int av_open_input_file(AVFormatContext** ic_ptr, const char* filename,
                                AVInputFormat* fmt,
                                int buf_size,
                                AVFormatParameters* ap) FFBODYNULL

FFEXPORT int avformat_open_input(AVFormatContext** ps, const char* filename, AVInputFormat* fmt, AVDictionary** options) FFBODYNULL

FFEXPORT AVFormatContext* avformat_alloc_context() FFBODYNULL

FFEXPORT int av_find_stream_info(AVFormatContext* ic) FFBODYNULL
FFEXPORT int avformat_find_stream_info(AVFormatContext* ic, AVDictionary** options) FFBODYNULL

FFEXPORT int av_read_packet(AVFormatContext* s, AVPacket* pkt) FFBODYNULL
FFEXPORT int av_read_frame(AVFormatContext* s, AVPacket* pkt) FFBODYNULL

FFEXPORT int av_seek_frame(AVFormatContext* s, int stream_index, int64_t timestamp,
                           int flags) FFBODYNULL

FFEXPORT int avformat_seek_file(AVFormatContext* s, int stream_index, int64_t min_ts, int64_t ts, int64_t max_ts, int flags) FFBODYNULL

FFEXPORT int av_read_play(AVFormatContext* s) FFBODYNULL
FFEXPORT int av_read_pause(AVFormatContext* s) FFBODYNULL

FFEXPORT void av_close_input_stream(AVFormatContext* s) FFBODYVOID
FFEXPORT void av_close_input_file(AVFormatContext* s) FFBODYVOID
FFEXPORT void avformat_close_input(AVFormatContext** s) FFBODYVOID

FFEXPORT AVStream* av_new_stream(AVFormatContext* s, int id) FFBODYNULL
FFEXPORT AVProgram* av_new_program(AVFormatContext* s, int id) FFBODYNULL

FFEXPORT AVChapter* ff_new_chapter(AVFormatContext* s, int id, AVRational time_base,
                                   int64_t start, int64_t end, const char* title) FFBODYNULL

FFEXPORT void av_set_pts_info(AVStream* s, int pts_wrap_bits,
                              int pts_num, int pts_den) FFBODYVOID

FFEXPORT int av_find_default_stream_index(AVFormatContext* s) FFBODYNULL

FFEXPORT int av_index_search_timestamp(AVStream* st, int64_t timestamp, int flags) FFBODYNULL

FFEXPORT void ff_reduce_index(AVFormatContext* s, int stream_index) FFBODYVOID

FFEXPORT int av_add_index_entry(AVStream* st, int64_t pos, int64_t timestamp,
                                int size, int distance, int flags) FFBODYNULL

FFEXPORT int av_seek_frame_binary(AVFormatContext* s, int stream_index,
                                  int64_t target_ts, int flags) FFBODYNULL

FFEXPORT void av_update_cur_dts(AVFormatContext* s, AVStream* ref_st, int64_t timestamp) FFBODYVOID

FFEXPORT int64_t av_gen_search(AVFormatContext* s, int stream_index,
                               int64_t target_ts, int64_t pos_min,
                               int64_t pos_max, int64_t pos_limit,
                               int64_t ts_min, int64_t ts_max,
                               int flags, int64_t* ts_ret,
                               int64_t (*read_timestamp)(struct AVFormatContext* , int , int64_t* , int64_t )) FFBODYNULL

FFEXPORT int av_set_parameters(AVFormatContext* s, AVFormatParameters* ap) FFBODYNULL

//FFEXPORT int av_write_header(AVFormatContext* s) FFBODYNULL
FFEXPORT int avformat_write_header(AVFormatContext *s, AVDictionary **options) FFBODYNULL

FFEXPORT int av_write_frame(AVFormatContext* s, AVPacket* pkt) FFBODYNULL
FFEXPORT int av_interleaved_write_frame(AVFormatContext* s, AVPacket* pkt) FFBODYNULL

FFEXPORT int av_interleave_packet_per_dts(AVFormatContext* s, AVPacket* out,
                                          AVPacket* pkt, int flush) FFBODYNULL

FFEXPORT int av_write_trailer(AVFormatContext* s) FFBODYNULL

FFEXPORT void dump_format(AVFormatContext* ic,
                          int index,
                          const char* url,
                          int is_output) FFBODYVOID

FFEXPORT void av_dump_format(AVFormatContext* ic,
                             int index,
                             const char* url,
                             int is_output) FFBODYVOID

FFEXPORT int64_t parse_date(const char* datestr, int duration) FFBODYNULL

FFEXPORT int64_t av_gettime() FFBODYNULL

FFEXPORT int64_t ffm_read_write_index(int fd) FFBODYNULL
FFEXPORT int ffm_write_write_index(int fd, int64_t pos) FFBODYNULL
FFEXPORT void ffm_set_write_index(AVFormatContext* s, int64_t pos, int64_t file_size) FFBODYVOID

FFEXPORT int find_info_tag(char* arg, int arg_size, const char* tag1, const char* info) FFBODYNULL

FFEXPORT int av_get_frame_filename(char* buf, int buf_size,
                                   const char* path, int number) FFBODYNULL

FFEXPORT int av_filename_number_test(const char* filename) FFBODYNULL

FFEXPORT int avf_sdp_create(AVFormatContext* ac[], int n_files, char* buff, int size) FFBODYNULL

FFEXPORT void ff_dynarray_add(intptr_t** tab_ptr, int* nb_ptr, intptr_t elem) FFBODYVOID

FFEXPORT time_t mktimegm(struct tm* tm) FFBODYNULL
FFEXPORT struct tm* brktimegm(time_t secs, struct tm* tm) FFBODYNULL
FFEXPORT const char* small_strptime(const char* p, const char* fmt,
                                    struct tm* dt) FFBODYNULL

FFEXPORT int resolve_host(struct in_addr* sin_addr, const char* hostname) FFBODYNULL

FFEXPORT void url_split(char* proto, int proto_size,
                        char* authorization, int authorization_size,
                        char* hostname, int hostname_size,
                        int* port_ptr,
                        char* path, int path_size,
                        const char* url) FFBODYVOID

FFEXPORT int match_ext(const char* filename, const char* extensions) FFBODYNULL

FFEXPORT AVIOContext* avio_alloc_context(unsigned char *buffer,
                                         int buffer_size,
                                         int write_flag,
                                         void *opaque,
                                         int (*read_packet)(void *opaque, uint8_t *buf, int buf_size),
                                         int (*write_packet)(void *opaque, uint8_t *buf, int buf_size),
                                         int64_t (*seek)(void *opaque, int64_t offset, int whence)) FFBODYNULL

FFEXPORT void avio_write(AVIOContext* s, const unsigned char* buf, int size) FFBODYVOID
FFEXPORT int64_t avio_seek(AVIOContext* s, int64_t offset, int whence) FFBODYNULL
FFEXPORT int64_t avio_skip(AVIOContext* s, int64_t offset) FFBODYNULL
FFEXPORT int64_t avio_size(AVIOContext* s) FFBODYNULL
FFEXPORT void avio_flush(AVIOContext* s) FFBODYVOID
FFEXPORT int avio_read(AVIOContext* s, unsigned char* buf, int size) FFBODYNULL

FFEXPORT int avio_close(AVIOContext* s) FFBODYNULL
FFEXPORT int avio_open (AVIOContext** s, const char* url, int flags) FFBODYNULL
FFEXPORT int avio_open2(AVIOContext** s, const char* url, int flags,
                        const AVIOInterruptCB* int_cb, AVDictionary** options) FFBODYNULL
FFEXPORT const char* avio_enum_protocols(void** opaque, int output) FFBODYNULL

FFEXPORT AVStream *avformat_new_stream(AVFormatContext *s, const AVCodec *c) FFBODYNULL
FFEXPORT uint8_t* av_stream_new_side_data(AVStream* stream, enum AVPacketSideDataType type, int  size) FFBODYNULL
FFEXPORT uint8_t* av_stream_get_side_data(AVStream *stream, enum AVPacketSideDataType type, int* size) FFBODYNULL

FFEXPORT int avformat_alloc_output_context2(AVFormatContext **ctx, AVOutputFormat *oformat,
                                            const char *format_name, const char *filename) FFBODYNULL
FFEXPORT void avformat_free_context(AVFormatContext *s) FFBODYVOID
