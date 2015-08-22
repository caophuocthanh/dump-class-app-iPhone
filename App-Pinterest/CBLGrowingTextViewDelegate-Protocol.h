//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class CBLGrowingTextView, NSString;

@protocol CBLGrowingTextViewDelegate <NSObject>
- (void)growingTextView:(CBLGrowingTextView *)arg1 didChangeText:(NSString *)arg2;
- (void)growingTextView:(CBLGrowingTextView *)arg1 didChangeHeight:(float)arg2;
- (void)growingTextView:(CBLGrowingTextView *)arg1 willChangeHeight:(float)arg2;

@optional
- (void)growingTextViewDidEndEditing:(CBLGrowingTextView *)arg1;
- (void)growingTextViewDidBeginEditing:(CBLGrowingTextView *)arg1;
@end
