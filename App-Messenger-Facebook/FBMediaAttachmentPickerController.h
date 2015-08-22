//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "FBMediaAttachmentPickerPhotoPreviewViewControllerDelegate.h"
#import "FBMediaPickerViewControllerDelegate.h"
#import "UIImagePickerControllerDelegate.h"
#import "UINavigationControllerDelegate.h"

@class FBMediaAttachmentPickerControllerConfiguration, FBMediaPickerViewController, FBUserSession, NSArray, NSString, UIImagePickerController;

@interface FBMediaAttachmentPickerController : NSObject <UINavigationControllerDelegate, UIImagePickerControllerDelegate, FBMediaPickerViewControllerDelegate, FBMediaAttachmentPickerPhotoPreviewViewControllerDelegate>
{
    long _dispatchOnceForMultipicker;
    long _dispatchOnceForDefaultpicker;
    id <FBMediaAttachmentPickerControllerDelegate> _delegate;
    FBMediaPickerViewController *_multiMediaPicker;
    UIImagePickerController *_defaultImagePicker;
    FBMediaAttachmentPickerControllerConfiguration *_configuration;
    NSArray *_selectedMediaAttachments;
    FBUserSession *_session;
}

+ (BOOL)shouldPresentInPopoverWithSourceType:(int)arg1;
@property(retain, nonatomic) FBUserSession *session; // @synthesize session=_session;
@property(retain, nonatomic) NSArray *selectedMediaAttachments; // @synthesize selectedMediaAttachments=_selectedMediaAttachments;
@property(retain, nonatomic) FBMediaAttachmentPickerControllerConfiguration *configuration; // @synthesize configuration=_configuration;
@property(retain, nonatomic) UIImagePickerController *defaultImagePicker; // @synthesize defaultImagePicker=_defaultImagePicker;
@property(retain, nonatomic) FBMediaPickerViewController *multiMediaPicker; // @synthesize multiMediaPicker=_multiMediaPicker;
@property(nonatomic) __weak id <FBMediaAttachmentPickerControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)mediaAttachmentPickerPhotoPreviewViewControllerDidCancel:(id)arg1;
- (void)mediaAttachmentPickerPhotoPreviewViewController:(id)arg1 didApproveImageAttachment:(id)arg2;
- (void)_imagePickerController:(id)arg1 infoForVideo:(id)arg2;
- (void)_imagePickerController:(id)arg1 infoForImage:(id)arg2;
- (void)_selectedMediaAttachment:(id)arg1;
- (void)mediaPicker:(id)arg1 openURL:(id)arg2;
- (void)mediaPickerPermissionDenied:(id)arg1;
- (void)mediaPickerDidClearMedia:(id)arg1;
- (void)mediaPickerDidCancel:(id)arg1;
- (void)mediaPicker:(id)arg1 didSelectMediaAssetAttachments:(id)arg2 fromSource:(int)arg3 currentPhotoAssetShown:(id)arg4;
- (void)imagePickerController:(id)arg1 didFinishPickingMediaWithInfo:(id)arg2;
- (void)imagePickerControllerDidCancel:(id)arg1;
- (void)logPublishedMediaAttachmentInformation;
- (BOOL)shouldPresentableViewControllerBeWrappedInNavigationController:(id)arg1;
- (id)presentableViewControllerWithWithSourceType:(int)arg1 selectedMediaAttachments:(id)arg2 highlightMediaAttachment:(id)arg3 selectionCapability:(int)arg4 navigationType:(unsigned int)arg5;
- (void)willPresentViewController;
- (id)presentableViewController;
- (BOOL)allowMultiMediaPicker;
- (void)dealloc;
- (id)initWithConfiguration:(id)arg1 session:(id)arg2;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end
