//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "ASDisplayNode.h"

#import "__FBCenteringScrollViewDelegate.h"

@class FBEdgeHighlightsNode, NSString;

@interface FBScrollableMediaNode : ASDisplayNode <__FBCenteringScrollViewDelegate>
{
    FBEdgeHighlightsNode *_edgeHighlightsNode;
    struct CGSize _mediaSize;
    struct {
        unsigned int didScroll:1;
        unsigned int willBeginDrag:1;
        unsigned int willBeginZoom:1;
        unsigned int didZoom:1;
        unsigned int didEndZoom:1;
    } _delegateFlags;
    id <FBScrollableMediaNodeDelegate> _delegate;
    ASDisplayNode *_mediaNode;
}

@property(readonly, nonatomic) ASDisplayNode *mediaNode; // @synthesize mediaNode=_mediaNode;
@property(readonly, nonatomic) struct CGSize mediaSize; // @synthesize mediaSize=_mediaSize;
@property(nonatomic) __weak id <FBScrollableMediaNodeDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)didLoad;
- (void)setShowEdgeHighlights:(BOOL)arg1 animated:(BOOL)arg2;
- (void)_layoutEdgeHighlights;
- (void)setEdgeHighlightColor:(id)arg1 forEdges:(unsigned int)arg2;
- (void)setAlpha:(float)arg1 forHighlightedEdges:(unsigned int)arg2;
- (void)setHighlightedEdges:(unsigned int)arg1 animated:(BOOL)arg2;
- (void)didLayoutMediaFromBounds:(struct CGRect)arg1;
- (void)didUpdateMediaSize:(struct CGSize)arg1 fromSize:(struct CGSize)arg2;
- (void)scrollViewViewportChanged;
- (void)willBeginInteractiveZooming:(id)arg1;
- (void)willBeginDraggingScrollView:(id)arg1;
- (void)didScrollScrollView:(id)arg1;
- (void)scrollViewDidDisappear:(id)arg1;
- (void)scrollViewWillBeginDragging:(id)arg1;
- (void)scrollViewDidZoom:(id)arg1;
- (void)scrollViewDidEndZooming:(id)arg1 withView:(id)arg2 atScale:(float)arg3;
- (void)scrollViewWillBeginZooming:(id)arg1 withView:(id)arg2;
- (void)scrollViewDidScroll:(id)arg1;
- (id)viewForZoomingInScrollView:(id)arg1;
- (struct CGPoint)viewPointForMediaPoint:(struct CGPoint)arg1;
- (struct CGPoint)mediaPointAtPoint:(struct CGPoint)arg1;
- (void)setMediaSize:(struct CGSize)arg1;
- (void)requireGestureRecognizerToFailBeforePanning:(id)arg1;
- (struct CGSize)scaledSize;
- (BOOL)isPannedToEdge:(unsigned int)arg1;
- (id)scrollView;
@property(nonatomic) struct CGPoint contentOffset;
@property(nonatomic) struct CGPoint contentCenter;
@property(nonatomic) float zoomScale;
- (void)setBackgroundColor:(id)arg1;
@property(readonly, nonatomic, getter=isZoomedOut) BOOL zoomedOut;
- (void)setBounds:(struct CGRect)arg1;
@property(nonatomic) BOOL scrollEnabled;
@property(readonly, nonatomic) BOOL tracking;
@property(readonly, nonatomic) BOOL zooming;
@property(nonatomic) float maximumZoomScale;
@property(nonatomic) float minimumZoomScale;
@property(readonly, nonatomic) float aspectFitZoomScale;
@property(readonly, nonatomic) float aspectFillZoomScale;
- (void)layout;
@property(readonly, nonatomic) BOOL mediaLoaded;
- (void)dealloc;
- (id)initWithContentNode:(id)arg1 mediaContentSize:(struct CGSize)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

