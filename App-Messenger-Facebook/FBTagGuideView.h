//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "FBTagView.h"

@class FBUserSession, UIImageView;

@interface FBTagGuideView : FBTagView
{
    UIImageView *_acceptImageView;
    UIImageView *_rejectImageView;
    FBUserSession *_session;
    UIImageView *_separatorImageView;
}

@property(retain, nonatomic) UIImageView *separatorImageView; // @synthesize separatorImageView=_separatorImageView;
@property(retain, nonatomic) FBUserSession *session; // @synthesize session=_session;
@property(retain, nonatomic) UIImageView *rejectImageView; // @synthesize rejectImageView=_rejectImageView;
@property(retain, nonatomic) UIImageView *acceptImageView; // @synthesize acceptImageView=_acceptImageView;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (struct CGSize)superSize;
- (id)initWithText:(id)arg1 tagRect:(struct CGRect)arg2 session:(id)arg3;

@end
