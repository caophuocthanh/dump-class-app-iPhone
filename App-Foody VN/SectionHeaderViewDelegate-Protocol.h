//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class CitySectionHeaderView;

@protocol SectionHeaderViewDelegate <NSObject>

@optional
- (void)didSeclectAtSection:(int)arg1;
- (void)sectionHeaderView:(CitySectionHeaderView *)arg1 sectionClosed:(int)arg2;
- (void)sectionHeaderView:(CitySectionHeaderView *)arg1 sectionOpened:(int)arg2;
@end

