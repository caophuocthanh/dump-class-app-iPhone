//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "CBLContextualRadialMenuConfiguration.h"

@class CBLBoard, NSString;

@interface CBLContextualRadialMenuBoardConfiguration : NSObject <CBLContextualRadialMenuConfiguration>
{
    CBLBoard *_board;
}

@property(readonly, nonatomic) CBLBoard *board; // @synthesize board=_board;
- (void).cxx_destruct;
- (BOOL)alwaysShowsButtonText;
- (BOOL)shouldDimBackground;
- (void)userDidCancel:(CDUnknownBlockType)arg1;
- (void)userSelectedButton:(int)arg1 completionBlock:(CDUnknownBlockType)arg2;
- (id)textForButton:(int)arg1;
- (id)imageForButton:(int)arg1;
- (int)mode;
- (id)initWithBoard:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

