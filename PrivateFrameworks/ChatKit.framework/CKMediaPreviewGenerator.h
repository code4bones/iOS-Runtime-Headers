/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
 */

@class CKMediaObject, NSData;

@interface CKMediaPreviewGenerator : NSOperation {
    NSData *_composePreviewResult;
    id _delegate;
    BOOL _generateComposePreview;
    CKMediaObject *_mediaObject;
    NSInteger _orientation;
    NSData *_previewResult;
}

@property(readonly) NSData *composePreviewResult;
@property(retain) CKMediaObject *mediaObject;
@property(readonly) NSData *previewResult;
@property id delegate;
@property BOOL generateComposePreview;
@property NSInteger orientation;

- (id)composePreviewResult;
- (void)dealloc;
- (id)delegate;
- (BOOL)generateComposePreview;
- (void)main;
- (id)mediaObject;
- (NSInteger)orientation;
- (id)previewResult;
- (void)setDelegate:(id)arg1;
- (void)setGenerateComposePreview:(BOOL)arg1;
- (void)setMediaObject:(id)arg1;
- (void)setOrientation:(NSInteger)arg1;

@end