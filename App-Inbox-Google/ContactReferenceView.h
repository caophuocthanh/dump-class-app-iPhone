//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class GIPNetworkImageView, UIButton, UILabel;

@interface ContactReferenceView : UIView
{
    UILabel *descriptionLabel_;
    UIButton *iconView_;
    UILabel *kindLabel_;
    UILabel *nameLabel_;
    GIPNetworkImageView *profileImage_;
    UIView *separator;
    id <JBTContactReference> contactReference_;
    id <JBTContact> contact_;
    id <ContactReferenceViewDelegate> delegate_;
}

+ (float)heightForContactReference:(id)arg1 width:(float)arg2;
@property(nonatomic) __weak id <ContactReferenceViewDelegate> delegate; // @synthesize delegate=delegate_;
@property(retain, nonatomic) id <JBTContact> contact; // @synthesize contact=contact_;
@property(retain, nonatomic) id <JBTContactReference> contactReference; // @synthesize contactReference=contactReference_;
- (void).cxx_destruct;
- (void)handleLongPress:(id)arg1;
- (void)iconTapped;
- (void)createSubviews;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1;

@end

