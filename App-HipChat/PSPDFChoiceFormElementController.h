//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "PSPDFChoiceEditorViewControllerDataSource.h"
#import "PSPDFChoiceEditorViewControllerDelegate.h"

@class NSString, PSPDFChoiceFormElement;

@interface PSPDFChoiceFormElementController : NSObject <PSPDFChoiceEditorViewControllerDataSource, PSPDFChoiceEditorViewControllerDelegate>
{
    PSPDFChoiceFormElement *_choiceFormElement;
    id <PSPDFChoiceFormElementControllerDelegate> _delegate;
}

@property(nonatomic) __weak id <PSPDFChoiceFormElementControllerDelegate> delegate; // @synthesize delegate=_delegate;
@property(readonly, nonatomic) PSPDFChoiceFormElement *choiceFormElement; // @synthesize choiceFormElement=_choiceFormElement;
- (void).cxx_destruct;
- (void)choiceEditorControllerDidEndEditingCustomText:(id)arg1;
- (void)choiceEditorControllerDidSelectCustomText:(id)arg1;
- (void)choiceEditorController:(id)arg1 didUpdateCustomText:(id)arg2;
- (void)choiceEditorController:(id)arg1 didSelectIndex:(unsigned int)arg2 shouldDismissController:(BOOL)arg3;
- (id)customText;
- (BOOL)isEdit;
- (id)selectedIndices;
- (BOOL)isSelectedAtIndex:(unsigned int)arg1;
- (id)optionTextAtIndex:(unsigned int)arg1;
- (BOOL)isMultiSelect;
- (unsigned int)numberOfOptionsSelected;
- (unsigned int)numberOfOptions;
- (id)initWithChoiceFormElement:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

