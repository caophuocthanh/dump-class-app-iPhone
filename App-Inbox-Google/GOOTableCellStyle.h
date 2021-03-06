//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "GOOCardStyle.h"

@interface GOOTableCellStyle : GOOCardStyle
{
    struct UIEdgeInsets _sectionHeaderInsets;
    BOOL _didSizeSections;
}

+ (id)nilHeaderViewForTableView:(id)arg1;
+ (void)prepareTableView:(id)arg1;
+ (float)tableView:(id)arg1 heightForFooterInSection:(int)arg2;
+ (float)tableView:(id)arg1 heightForHeaderInSection:(int)arg2 sectionTitle:(id)arg3;
+ (float)extraHeightForCellAtIndexPath:(id)arg1 tableView:(id)arg2;
+ (void)layoutSubviewsOfCell:(id)arg1 forTableView:(id)arg2 hasCellDivider:(BOOL)arg3;
+ (void)layoutSubviewsOfCell:(id)arg1 hasCellDivider:(BOOL)arg2;
+ (void)layoutSubviewsOfCell:(id)arg1;
+ (struct UIEdgeInsets)contentViewInsetsForTableView:(id)arg1;
+ (float)backgroundViewHorizontalInsetForTableView:(id)arg1;
+ (id)parentTableViewForCell:(id)arg1;
+ (struct UIEdgeInsets)contentViewInsetsAtIndexPath:(id)arg1 tableView:(id)arg2;
- (void)tableView:(id)arg1 willDisplayCell:(id)arg2 forRowAtIndexPath:(id)arg3;
- (id)tableView:(id)arg1 viewForContentViewObject:(id)arg2 forHeaderInSection:(int)arg3;
- (void)tableView:(id)arg1 updateBackgroundForHeaderView:(id)arg2 forHeaderInSection:(int)arg3;
- (id)init;

@end

