//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class NSArray, UILabel;

@interface IGExploreComposedPeopleYouFollowView : UIView
{
    UILabel *_titleLabel;
    NSArray *_peopleViews;
    NSArray *_separatorViews;
}

@property(readonly, nonatomic) NSArray *separatorViews; // @synthesize separatorViews=_separatorViews;
@property(readonly, nonatomic) NSArray *peopleViews; // @synthesize peopleViews=_peopleViews;
@property(nonatomic) __weak UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
- (void).cxx_destruct;
- (void)configureSubviewsLayout;
- (void)layoutSubviews;
- (void)addAndConfigureAllSubviews;
- (id)initWithFrameWidth:(float)arg1 peopleViews:(id)arg2;

@end

