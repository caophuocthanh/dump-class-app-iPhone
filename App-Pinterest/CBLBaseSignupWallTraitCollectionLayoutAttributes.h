//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "CBLBaseLayoutAttributes.h"

@class NSString;

@interface CBLBaseSignupWallTraitCollectionLayoutAttributes : CBLBaseLayoutAttributes
{
    BOOL _prefersStatusBarHidden;
    BOOL _useSlidingModal;
    BOOL _shouldAutorotate;
    BOOL _shouldDesignateSupportedInterfaceOrientations;
    BOOL _scrollContentForKeyboard;
    NSString *_funnelAction;
}

@property(nonatomic) BOOL scrollContentForKeyboard; // @synthesize scrollContentForKeyboard=_scrollContentForKeyboard;
@property(nonatomic) BOOL shouldDesignateSupportedInterfaceOrientations; // @synthesize shouldDesignateSupportedInterfaceOrientations=_shouldDesignateSupportedInterfaceOrientations;
@property(nonatomic) BOOL shouldAutorotate; // @synthesize shouldAutorotate=_shouldAutorotate;
@property(nonatomic) BOOL useSlidingModal; // @synthesize useSlidingModal=_useSlidingModal;
@property(nonatomic) BOOL prefersStatusBarHidden; // @synthesize prefersStatusBarHidden=_prefersStatusBarHidden;
@property(retain, nonatomic) NSString *funnelAction; // @synthesize funnelAction=_funnelAction;
- (void).cxx_destruct;
- (id)initWithTraitCollection:(id)arg1;

@end
