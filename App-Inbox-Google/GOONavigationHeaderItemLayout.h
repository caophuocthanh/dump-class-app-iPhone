//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class GOONavigationBarButton, UIView;

@interface GOONavigationHeaderItemLayout : NSObject
{
    BOOL _rightAligned;
    GOONavigationBarButton *_barButton;
    UIView *_customView;
    struct CGRect _frame;
    struct UIEdgeInsets _contentInsets;
    struct UIEdgeInsets _backgroundInsets;
    struct UIEdgeInsets _additionalContentInsets;
}

@property(nonatomic) struct UIEdgeInsets additionalContentInsets; // @synthesize additionalContentInsets=_additionalContentInsets;
@property(nonatomic) BOOL rightAligned; // @synthesize rightAligned=_rightAligned;
@property(retain, nonatomic) UIView *customView; // @synthesize customView=_customView;
@property(retain, nonatomic) GOONavigationBarButton *barButton; // @synthesize barButton=_barButton;
@property(readonly, nonatomic) struct UIEdgeInsets backgroundInsets; // @synthesize backgroundInsets=_backgroundInsets;
@property(readonly, nonatomic) struct UIEdgeInsets contentInsets; // @synthesize contentInsets=_contentInsets;
@property(readonly, nonatomic) struct CGRect frame; // @synthesize frame=_frame;
- (void).cxx_destruct;
- (void)evaluateWithBounds:(struct CGRect)arg1;

@end

