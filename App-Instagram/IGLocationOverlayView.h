//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

#import "MKMapViewDelegate.h"

@class CLLocation, MKMapView, NSString, UIImageView;

@interface IGLocationOverlayView : UIView <MKMapViewDelegate>
{
    MKMapView *_map;
    UIView *_wrapperView;
    UIImageView *_frameView;
    CLLocation *_centerLocation;
}

@property(retain, nonatomic) CLLocation *centerLocation; // @synthesize centerLocation=_centerLocation;
@property(retain, nonatomic) UIImageView *frameView; // @synthesize frameView=_frameView;
@property(retain, nonatomic) UIView *wrapperView; // @synthesize wrapperView=_wrapperView;
@property(retain, nonatomic) MKMapView *map; // @synthesize map=_map;
- (void).cxx_destruct;
- (void)dismiss;
- (void)showInView:(id)arg1;
- (id)initWithCenterLocation:(id)arg1;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

