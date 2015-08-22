//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "IGTableView.h"

#import "IGReusableCellTableView.h"

@class NSString, UIView;

@interface IGPlainTableView : IGTableView <IGReusableCellTableView>
{
    BOOL _pinsHeaderView;
    BOOL _wantsStatusBarBackground;
    id _headerViewKVOHandler;
    id _footerViewKVOHandler;
    UIView *_statusBarBlurringView;
}

+ (Class)cellClass;
@property(retain, nonatomic) UIView *statusBarBlurringView; // @synthesize statusBarBlurringView=_statusBarBlurringView;
@property(retain, nonatomic) id footerViewKVOHandler; // @synthesize footerViewKVOHandler=_footerViewKVOHandler;
@property(retain, nonatomic) id headerViewKVOHandler; // @synthesize headerViewKVOHandler=_headerViewKVOHandler;
@property(nonatomic) BOOL wantsStatusBarBackground; // @synthesize wantsStatusBarBackground=_wantsStatusBarBackground;
@property(nonatomic) BOOL pinsHeaderView; // @synthesize pinsHeaderView=_pinsHeaderView;
- (void).cxx_destruct;
- (Class)defaultCellClass;
- (void)layoutSubviews;
- (void)setTableHeaderView:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1 style:(int)arg2;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

