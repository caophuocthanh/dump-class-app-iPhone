//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "JBTEventListener.h"

@class JBTEvent_TypeEnum, NSString;

@interface JBTICommonTypedEventListener : NSObject <JBTEventListener>
{
    JBTEvent_TypeEnum *type_;
}

+ (const struct J2ObjcClassInfo *)__metadata;
- (void)dealloc;
- (void)onTypedEventWithJBTEvent:(id)arg1;
- (void)onEventWithJBTEvent:(id)arg1;
- (id)initWithJBTEvent_TypeEnum:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

