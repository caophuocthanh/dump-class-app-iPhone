//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class FBCheckinRecentPlacesController, FBNearbyDataSet, NSError;

@protocol FBCheckinRecentPlacesControllerDelegate <NSObject>
- (void)recentPlacesController:(FBCheckinRecentPlacesController *)arg1 didFailToLoadRecentPlacesWithError:(NSError *)arg2;
- (void)recentPlacesController:(FBCheckinRecentPlacesController *)arg1 didFinishWithRecentPlaces:(FBNearbyDataSet *)arg2 loadedFromCache:(BOOL)arg3;
@end

