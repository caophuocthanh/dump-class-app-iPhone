//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UICollectionReusableView.h"

@class NSString, UILabel, UIView;

@interface CBLSearchFilterOptionsSectionHeader : UICollectionReusableView
{
    NSString *_headerTitle;
    float _bottomPadding;
    UIView *_outsideBoundView;
    UILabel *_headerTitleLabel;
    UIView *_seperatorLine;
}

@property(retain, nonatomic) UIView *seperatorLine; // @synthesize seperatorLine=_seperatorLine;
@property(retain, nonatomic) UILabel *headerTitleLabel; // @synthesize headerTitleLabel=_headerTitleLabel;
@property(retain, nonatomic) UIView *outsideBoundView; // @synthesize outsideBoundView=_outsideBoundView;
@property(nonatomic) float bottomPadding; // @synthesize bottomPadding=_bottomPadding;
@property(retain, nonatomic) NSString *headerTitle; // @synthesize headerTitle=_headerTitle;
- (void).cxx_destruct;
- (id)hitTest:(struct CGPoint)arg1 withEvent:(id)arg2;
- (void)prepareForReuse;
- (id)initWithFrame:(struct CGRect)arg1;

@end
