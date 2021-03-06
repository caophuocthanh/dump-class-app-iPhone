//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "FBValueObject.h"

#import "NSCopying.h"

@class FBComposerAccessibilityPayload, FBComposerPostCompositionRailItemAction, FBComposerPostCompositionRailItemIcon;

@interface FBComposerPostCompositionRailItem : FBValueObject <NSCopying>
{
    FBComposerPostCompositionRailItemIcon *_icon;
    FBComposerPostCompositionRailItemAction *_action;
    FBComposerAccessibilityPayload *_accessibilityPayload;
}

@property(readonly, copy, nonatomic) FBComposerAccessibilityPayload *accessibilityPayload; // @synthesize accessibilityPayload=_accessibilityPayload;
@property(readonly, copy, nonatomic) FBComposerPostCompositionRailItemAction *action; // @synthesize action=_action;
@property(readonly, copy, nonatomic) FBComposerPostCompositionRailItemIcon *icon; // @synthesize icon=_icon;
- (void).cxx_destruct;
- (id)initWithIcon:(id)arg1 action:(id)arg2 accessibilityPayload:(id)arg3;

@end

