//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "FBAvatarTaggingTagSearchDataSource.h"

@class NSPredicate;

@interface FBAvatarPickerControllerDataSource : FBAvatarTaggingTagSearchDataSource
{
    NSPredicate *_predicate;
}

@property(retain, nonatomic) NSPredicate *predicate; // @synthesize predicate=_predicate;
- (void).cxx_destruct;
- (void)searchProviderHasAvatars:(id)arg1 andStubs:(id)arg2 forText:(id)arg3 fromRemote:(BOOL)arg4;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (void)setSearchText:(id)arg1;

// Remaining properties
@property(nonatomic) __weak id <UITableViewDataSource><FBAvatarTaggingSectionDataSourceDelegate> delegate; // @dynamic delegate;

@end
