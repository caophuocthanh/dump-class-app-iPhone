//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString, PSPDFAnnotationStyleViewController, PSPDFFreeTextAccessoryView;

@protocol PSPDFFreeTextAccessoryViewDelegate <NSObject>

@optional
- (void)freeTextAccessoryView:(PSPDFFreeTextAccessoryView *)arg1 didChangeProperty:(NSString *)arg2;
- (BOOL)freeTextAccessoryView:(PSPDFFreeTextAccessoryView *)arg1 shouldChangeProperty:(NSString *)arg2;
- (PSPDFAnnotationStyleViewController *)freeTextAccessoryViewDidRequestInspector:(PSPDFFreeTextAccessoryView *)arg1;
- (void)clearButtonPressedOnFreeTextAccessoryView:(PSPDFFreeTextAccessoryView *)arg1;
- (void)doneButtonPressedOnFreeTextAccessoryView:(PSPDFFreeTextAccessoryView *)arg1;
@end
