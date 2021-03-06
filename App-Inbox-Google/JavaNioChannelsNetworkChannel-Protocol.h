//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "JavaIoCloseable.h"
#import "JavaLangAutoCloseable.h"
#import "JavaNioChannelsChannel.h"
#import "JavaObject.h"
#import "NSObject.h"

@class JavaNetSocketAddress;

@protocol JavaNioChannelsNetworkChannel <JavaLangAutoCloseable, JavaNioChannelsChannel, JavaIoCloseable, NSObject, JavaObject>
- (id <JavaUtilSet>)supportedOptions;
- (id <JavaNioChannelsNetworkChannel>)setOptionWithJavaNetSocketOption:(id <JavaNetSocketOption>)arg1 withId:(id)arg2;
- (id)getOptionWithJavaNetSocketOption:(id <JavaNetSocketOption>)arg1;
- (JavaNetSocketAddress *)getLocalAddress;
- (id <JavaNioChannelsNetworkChannel>)bindWithJavaNetSocketAddress:(JavaNetSocketAddress *)arg1;
@end

