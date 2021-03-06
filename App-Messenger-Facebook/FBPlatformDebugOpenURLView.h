//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

#import "UITextFieldDelegate.h"

@class FBPlatformDebugDataView, NSDictionary, NSString, NSURL;

@interface FBPlatformDebugOpenURLView : UIView <UITextFieldDelegate>
{
    FBPlatformDebugDataView *_dataView;
    FBPlatformDebugDataView *_resultView;
}

@property(retain, nonatomic) FBPlatformDebugDataView *resultView; // @synthesize resultView=_resultView;
- (void).cxx_destruct;
- (void)_setDictionary:(id)arg1 forDataView:(id)arg2 textViewLabel:(id)arg3;
- (id)_dictionaryForDataView:(id)arg1 textViewLabel:(id)arg2;
- (void)layoutSubviews;
- (void)showResultViewWithURL:(id)arg1 animated:(BOOL)arg2;
- (void)hideResultViewAnimated:(BOOL)arg1;
- (void)dismissKeyboard;
@property(copy, nonatomic) NSDictionary *queryParameters;
@property(copy, nonatomic) NSDictionary *methodArgs;
@property(copy, nonatomic) NSDictionary *bridgeArgs;
@property(copy, nonatomic) NSURL *baseURL;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

