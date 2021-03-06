//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "FBMediaPickerViewController.h"

#import "FBMagicStoryPickerViewControllerProtocol.h"
#import "FBMediaPickerViewControllerDelegate.h"

@class NSMutableArray, NSString;

@interface FBMagicStoryPickerViewController : FBMediaPickerViewController <FBMediaPickerViewControllerDelegate, FBMagicStoryPickerViewControllerProtocol>
{
    NSMutableArray *_items;
    BOOL _allowVideos;
    unsigned int _oldFilter;
    id <FBMagicStoryPhotoPickerDelegate> _magicStoryPickerDelegate;
}

@property(nonatomic) __weak id <FBMagicStoryPhotoPickerDelegate> magicStoryPickerDelegate; // @synthesize magicStoryPickerDelegate=_magicStoryPickerDelegate;
- (void).cxx_destruct;
- (void)_toggleSection;
- (void)_revertMediaFilter;
- (void)mediaPickerDidCancel:(id)arg1;
- (void)mediaPicker:(id)arg1 didSelectMediaAssetAttachments:(id)arg2 fromSource:(int)arg3 currentPhotoAssetShown:(id)arg4;
- (void)mediaPicker:(id)arg1 openURL:(id)arg2;
- (void)mediaPickerPermissionDenied:(id)arg1;
- (void)mediaGrid:(id)arg1 didToggleSelection:(id)arg2 fromSource:(int)arg3 wasSelected:(BOOL)arg4;
- (void)viewWillAppear:(BOOL)arg1;
- (void)dealloc;
- (id)initWithCurrentFBSession:(id)arg1 selectedImages:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

