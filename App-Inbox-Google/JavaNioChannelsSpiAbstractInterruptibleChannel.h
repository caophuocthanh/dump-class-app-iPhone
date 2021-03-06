//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "JavaNioChannelsChannel.h"
#import "JavaNioChannelsInterruptibleChannel.h"

@class JavaNioChannelsSpiAbstractInterruptibleChannel_ChannelCloser, NSString;

@interface JavaNioChannelsSpiAbstractInterruptibleChannel : NSObject <JavaNioChannelsChannel, JavaNioChannelsInterruptibleChannel>
{
    // Error parsing type: Ac, name: interrupted_
    // Error parsing type: Ac, name: closed_
    JavaNioChannelsSpiAbstractInterruptibleChannel_ChannelCloser *interruptAndCloseRunnable_;
}

+ (const struct J2ObjcClassInfo *)__metadata;
- (void)dealloc;
- (void)implCloseChannel;
- (void)endWithBoolean:(BOOL)arg1;
- (void)begin;
- (void)close;
- (BOOL)isOpen;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

