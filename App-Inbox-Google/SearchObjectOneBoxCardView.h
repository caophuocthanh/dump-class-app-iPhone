//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "SmartMailCardView.h"

#import "SearchOneBoxCardObject.h"

@class SmartMailSimpleSnippetView, UIImageView, UIView;

@interface SearchObjectOneBoxCardView : SmartMailCardView <SearchOneBoxCardObject>
{
    UIView *cardMainAccessibilityArea_;
    UIView *actionBackground_;
    UIImageView *cardShadowImage_;
    SmartMailSimpleSnippetView *searchAction_;
}

+ (void)initialize;
+ (float)heightWithLayout:(id)arg1 width:(float)arg2;
+ (float)textSpacing;
+ (float)imageWidth;
- (void).cxx_destruct;
- (void)layoutSubviews;
@property(nonatomic) __weak id <SmartMailInteractionSupport> smartMailDelegate;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)addToMainAccessibilityLabelWithLabel:(id)arg1;
- (void)updateModelWithCurrentLayout;
- (id)snippetForLineItem:(id)arg1 index:(unsigned int)arg2 accentColor:(id)arg3;
- (void)createSubviews;
- (void)updateWithModel:(id)arg1;

// Remaining properties
@property(retain, nonatomic) id <JBTGenericSmartMailLayout> layout;

@end

