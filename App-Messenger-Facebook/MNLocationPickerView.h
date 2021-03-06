//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

#import "MNLocationPickerMapViewDelegate.h"

@class MNLoadingView, MNLocationPickerErrorView, MNLocationPickerMapView, MNLocationPickerSelectedLocationView, NSString, UISearchBar;

@interface MNLocationPickerView : UIView <MNLocationPickerMapViewDelegate>
{
    UISearchBar *_searchBar;
    UIView *_searchSeparatorView;
    MNLocationPickerMapView *_mapView;
    UIView *_mapSeparatorView;
    MNLocationPickerSelectedLocationView *_selectedLocationView;
    UIView *_nearbyPlacesView;
    unsigned int _viewState;
    MNLoadingView *_loadingView;
    MNLocationPickerErrorView *_errorView;
    id <MNLocationPickerViewDelegate> _delegate;
}

@property(nonatomic) __weak id <MNLocationPickerViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)locationPickerMapView:(id)arg1 didChangeSelectedLocationType:(unsigned int)arg2;
- (void)_hideErrorView;
- (void)_showErrorView;
- (void)_hideLoadingIndicator;
- (void)_showLoadingIndicator;
- (void)setViewState:(unsigned int)arg1;
- (void)setSelectedLocation:(id)arg1;
- (void)setUserTrackingEnabled:(BOOL)arg1;
- (CDStruct_c3b9c2ee)mapCenterCoordinate;
- (void)mn_setBottomContentInset:(float)arg1;
- (void)mn_setTopContentInset:(float)arg1;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1 nearbyPlacesView:(id)arg2 searchBar:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

