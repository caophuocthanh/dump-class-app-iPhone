//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UITableViewCell.h"

#import "NICell.h"

@class NSString, UIView;

@interface NIDrawRectBlockCell : UITableViewCell <NICell>
{
    UIView *_blockView;
}

+ (float)heightForObject:(id)arg1 atIndexPath:(id)arg2 tableView:(id)arg3;
@property(retain, nonatomic) UIView *blockView; // @synthesize blockView=_blockView;
- (void).cxx_destruct;
- (BOOL)shouldUpdateCellWithObject:(id)arg1;
- (id)initWithStyle:(int)arg1 reuseIdentifier:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

