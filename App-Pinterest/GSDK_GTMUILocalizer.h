//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSBundle;

@interface GSDK_GTMUILocalizer : NSObject
{
    id owner_;
    id otherObjectToLocalize_;
    id yetAnotherObjectToLocalize_;
    NSBundle *bundle_;
}

+ (id)bundleForOwner:(id)arg1;
@property(nonatomic) id yetAnotherObjectToLocalize; // @synthesize yetAnotherObjectToLocalize=yetAnotherObjectToLocalize_;
@property(nonatomic) id otherObjectToLocalize; // @synthesize otherObjectToLocalize=otherObjectToLocalize_;
@property(nonatomic) id owner; // @synthesize owner=owner_;
- (void)localizeButton:(id)arg1;
- (void)localizeAccessibility:(id)arg1;
- (void)localizeView:(id)arg1 recursively:(BOOL)arg2;
- (void)localizeSegmentedControl:(id)arg1;
- (void)localizeToolbar:(id)arg1;
- (void)localizeObject:(id)arg1 recursively:(BOOL)arg2;
- (id)localizedStringForString:(id)arg1;
- (void)awakeFromNib;
- (void)dealloc;
- (id)initWithBundle:(id)arg1;

@end
