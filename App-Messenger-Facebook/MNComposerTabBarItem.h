//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "FBValueObject.h"

#import "NSCopying.h"

@class MNComposerTabBarIcon, NSString, NSURL;

@interface MNComposerTabBarItem : FBValueObject <NSCopying>
{
    BOOL _showsDotInOverflowMenu;
    NSString *_extensionIdentifier;
    int _category;
    MNComposerTabBarIcon *_icon;
    int _badgeCount;
    NSString *_name;
    NSString *_shortDescription;
    NSURL *_promotionImageURL;
    NSString *_accessibilityIdentifier;
}

@property(readonly, copy, nonatomic) NSString *accessibilityIdentifier; // @synthesize accessibilityIdentifier=_accessibilityIdentifier;
@property(readonly, copy, nonatomic) NSURL *promotionImageURL; // @synthesize promotionImageURL=_promotionImageURL;
@property(readonly, copy, nonatomic) NSString *shortDescription; // @synthesize shortDescription=_shortDescription;
@property(readonly, copy, nonatomic) NSString *name; // @synthesize name=_name;
@property(readonly, nonatomic) BOOL showsDotInOverflowMenu; // @synthesize showsDotInOverflowMenu=_showsDotInOverflowMenu;
@property(readonly, nonatomic) int badgeCount; // @synthesize badgeCount=_badgeCount;
@property(readonly, copy, nonatomic) MNComposerTabBarIcon *icon; // @synthesize icon=_icon;
@property(readonly, nonatomic) int category; // @synthesize category=_category;
@property(readonly, copy, nonatomic) NSString *extensionIdentifier; // @synthesize extensionIdentifier=_extensionIdentifier;
- (void).cxx_destruct;
- (id)initWithExtensionIdentifier:(id)arg1 category:(int)arg2 icon:(id)arg3 badgeCount:(int)arg4 showsDotInOverflowMenu:(BOOL)arg5 name:(id)arg6 shortDescription:(id)arg7 promotionImageURL:(id)arg8 accessibilityIdentifier:(id)arg9;

@end
