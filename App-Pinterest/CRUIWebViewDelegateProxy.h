//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSProxy.h"

#import "UIWebViewDelegate.h"

@class CRNetStatDispatch, CRRequestState, NSSet, NSString;

@interface CRUIWebViewDelegateProxy : NSProxy <UIWebViewDelegate>
{
    id _delegate;
    NSSet *_selectorsWeRespondTo;
    CRRequestState *_reqState;
    CRNetStatDispatch *_dispatch;
}

+ (id)performSwizzledUIWebViewInitWithFrameSelectorFromWebview:(id)arg1 withFrame:(struct CGRect)arg2;
+ (id)performSwizzledUIWebViewDelegateSelectorFromWebview:(id)arg1;
+ (void)performSwizzledUIWebViewSetDelegateSelectorFromWebview:(id)arg1 withProxy:(id)arg2;
+ (void)setDelegateForUIWebView:(id)arg1 delegate:(id)arg2 dispatch:(id)arg3;
+ (id)delegateForUIWebView:(id)arg1 dispatch:(id)arg2;
+ (id)initWithFrameForUIWebView:(id)arg1 frame:(struct CGRect)arg2 dispatch:(id)arg3;
+ (id)proxyFromWebView:(id)arg1 dispatch:(id)arg2;
+ (BOOL)isInstrumented;
+ (void)uninstrumentUIWebView;
+ (void)traverseView:(id)arg1;
+ (void)traverseUI;
+ (void)instrumentUIWebViewWithDispatch:(id)arg1;
+ (void)swizzleUIWebViewSetDelegateWithDispatch:(id)arg1;
+ (void)swizzleUIWebViewDelegateWithDispatch:(id)arg1;
+ (void)swizzleUIWebViewInitWithFrameAndDispatch:(id)arg1;
+ (void)replaceUIWebViewmethod:(SEL)arg1 withSwizzledSelector:(SEL)arg2 implementedBlock:(id)arg3;
+ (BOOL)respondsToSelector:(SEL)arg1;
@property(retain, nonatomic) CRNetStatDispatch *dispatch; // @synthesize dispatch=_dispatch;
@property(retain, nonatomic) CRRequestState *reqState; // @synthesize reqState=_reqState;
@property(retain, nonatomic) NSSet *selectorsWeRespondTo; // @synthesize selectorsWeRespondTo=_selectorsWeRespondTo;
@property(nonatomic) id delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)addAssociationToWebView:(id)arg1;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
- (void)forwardInvocation:(id)arg1;
- (id)methodSignatureForSelector:(SEL)arg1;
- (BOOL)respondsToSelector:(SEL)arg1;
- (void)webView:(id)arg1 didFailLoadWithError:(id)arg2;
- (void)webViewDidFinishLoad:(id)arg1;
- (BOOL)webView:(id)arg1 shouldStartLoadWithRequest:(id)arg2 navigationType:(int)arg3;
- (id)initWithDelegate:(id)arg1 dispatch:(id)arg2;

// Remaining properties
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end
