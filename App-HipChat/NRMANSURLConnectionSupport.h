//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface NRMANSURLConnectionSupport : NSObject
{
}

+ (id)generateProxyFromDelegate:(id)arg1 request:(id)arg2 startImmediately:(BOOL)arg3;
+ (void)noticeResponse:(id)arg1 forRequest:(id)arg2 withTimer:(id)arg3 andBody:(id)arg4 bytesSent:(unsigned int)arg5 bytesReceived:(unsigned int)arg6;
+ (void)noticeError:(id)arg1 forRequest:(id)arg2 withTimer:(id)arg3;
+ (BOOL)isNewRelicServiceRequest:(id)arg1;
+ (id)poseImplementationBlockForSelector:(SEL)arg1;
+ (void)initialize;
+ (BOOL)deinstrumentNSURLConnection;
+ (BOOL)instrumentNSURLConnection;
+ (void)deinstrumentURLConnInitMethods;
+ (void)overrideURLConnInitMethods;
+ (void)set__NRMA__initWithRequest_delegate:(CDUnknownFunctionPointerType)arg1;
+ (void)set__NRMA__initWithRequest_delegate_startImmediately:(CDUnknownFunctionPointerType)arg1;
+ (CDUnknownFunctionPointerType)getNRMA_InitWithRequest_Delegate_StartImmediately;
+ (CDUnknownFunctionPointerType)getNRMA_InitWithReqeust_Delegate_;
+ (CDUnknownFunctionPointerType *)getIMPArray;

@end
