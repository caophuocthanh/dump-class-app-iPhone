//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString;

@interface FBPlatformDebugItem : NSObject
{
    SEL _action;
    id _target;
    NSString *_title;
}

+ (id)itemWithTitle:(id)arg1 target:(id)arg2 action:(SEL)arg3;
@property(readonly, copy, nonatomic) NSString *title; // @synthesize title=_title;
@property(readonly, nonatomic) __weak id target; // @synthesize target=_target;
@property(readonly, nonatomic) SEL action; // @synthesize action=_action;
- (void).cxx_destruct;
- (id)init;
- (id)initWithTitle:(id)arg1 target:(id)arg2 action:(SEL)arg3;

@end

