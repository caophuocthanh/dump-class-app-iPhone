//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "FBFormPickerElement.h"

#import "FBPlacePickerViewControllerDelegate.h"

@class FBNearbyCache, FBNearbyPlace, FBPlacePickerBaseViewController, FBUserSession, NSString;

@interface FBFormPlacePickerElement : FBFormPickerElement <FBPlacePickerViewControllerDelegate>
{
    FBNearbyCache *_nearbyCache;
    FBPlacePickerBaseViewController *_picker;
    FBUserSession *_session;
    CDUnknownBlockType _pickerSelectBlock;
}

@property(copy, nonatomic) CDUnknownBlockType pickerSelectBlock; // @synthesize pickerSelectBlock=_pickerSelectBlock;
- (void).cxx_destruct;
- (void)_openPlacePicker;
- (void)placePickerDidRemoveCurrentPlace:(id)arg1;
- (void)placePickerDidCancel:(id)arg1;
- (void)placePicker:(id)arg1 didFinishWithFreeString:(id)arg2;
- (void)placePicker:(id)arg1 didFinishWithPlace:(id)arg2 location:(id)arg3 suggestedPhoto:(BOOL)arg4;
- (id)nearbyCache;
- (id)stringValue;
- (BOOL)showingPlaceholder;
@property(readonly, nonatomic) FBNearbyPlace *selectedPlace;
- (void)setSelectBlock:(CDUnknownBlockType)arg1;
- (id)initWithID:(int)arg1 selectedPlace:(id)arg2 session:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

