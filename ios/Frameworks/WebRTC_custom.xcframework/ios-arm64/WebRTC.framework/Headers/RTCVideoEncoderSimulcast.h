#import <WebRTC_custom/RTCMacros.h>
#import <WebRTC_custom/RTCVideoEncoder.h>
#import <WebRTC_custom/RTCVideoEncoderFactory.h>
#import <WebRTC_custom/RTCVideoCodecInfo.h>

RTC_OBJC_EXPORT
@interface RTC_OBJC_TYPE (RTCVideoEncoderSimulcast) : NSObject

+ (id<RTC_OBJC_TYPE(RTCVideoEncoder)>)simulcastEncoderWithPrimary:(id<RTC_OBJC_TYPE(RTCVideoEncoderFactory)>)primary
                                                         fallback:(id<RTC_OBJC_TYPE(RTCVideoEncoderFactory)>)fallback
                                                   videoCodecInfo:(RTC_OBJC_TYPE(RTCVideoCodecInfo) *)videoCodecInfo;

@end
