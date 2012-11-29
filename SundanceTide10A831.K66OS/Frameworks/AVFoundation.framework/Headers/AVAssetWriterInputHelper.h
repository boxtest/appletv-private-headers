/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

#import "AVFoundation-Structs.h"
#import <NSObject.h> // Unknown library

@class AVAssetWriterInputConfigurationState, NSDictionary, AVWeakReference, NSArray, AVOutputSettings, NSString;

@interface AVAssetWriterInputHelper : NSObject {
	AVAssetWriterInputConfigurationState *_configurationState;	// 4 = 0x4
	AVWeakReference *_weakReferenceToAssetWriterInput;	// 8 = 0x8
}
@property(assign, nonatomic) short alternateGroupID;	// G=0x341faccd; S=0x341facf5; 
@property(readonly, assign, nonatomic) AVAssetWriterInputConfigurationState *configurationState;	// G=0x341fb105; @synthesize=_configurationState
@property(assign, nonatomic) BOOL expectsMediaDataInRealTime;	// G=0x341fa935; S=0x341fa95d; 
@property(copy, nonatomic) NSString *extendedLanguageTag;	// G=0x341fab65; S=0x341fab8d; 
@property(copy, nonatomic) NSString *languageCode;	// G=0x341faab1; S=0x341faad9; 
@property(assign, nonatomic) BOOL marksOutputTrackAsEnabled;	// G=0x341fac19; S=0x341fac41; 
@property(assign, nonatomic) int mediaTimeScale;	// G=0x341fa87d; S=0x341fa8a5; 
@property(readonly, assign, nonatomic) NSString *mediaType;	// G=0x341fa681; 
@property(copy, nonatomic) NSArray *metadata;	// G=0x341fa7c9; S=0x341fa7f1; 
@property(assign, nonatomic) CGSize naturalSize;	// G=0x341fa9e9; S=0x341faa25; 
@property(readonly, assign, nonatomic) AVOutputSettings *outputSettings;	// G=0x341fa6a9; 
@property(readonly, assign, nonatomic) CVPixelBufferPoolRef pixelBufferPool;	// G=0x341fb071; 
@property(readonly, assign, nonatomic, getter=isReadyForMoreMediaData) BOOL readyForMoreMediaData;	// G=0x341fa931; 
@property(readonly, assign, nonatomic) opaqueCMFormatDescription *sourceFormatHint;	// G=0x341fa6d1; 
@property(copy, nonatomic) NSDictionary *sourcePixelBufferAttributes;	// G=0x341fafe1; S=0x341fb009; 
@property(readonly, assign, nonatomic) int status;	// G=0x341fa565; 
@property(readonly, assign, nonatomic) int trackID;	// G=0x341fa67d; 
@property(readonly, assign, nonatomic) NSDictionary *trackReferences;	// G=0x341fad81; 
@property(assign, nonatomic) CGAffineTransform transform;	// G=0x341fa6f9; S=0x341fa73d; 
@property(retain) AVWeakReference *weakReferenceToAssetWriterInput;	// G=0x341fb115; S=0x341fb129; @synthesize=_weakReferenceToAssetWriterInput
- (id)initWithConfigurationState:(id)configurationState;	// 0x341fa41d
- (void)addTrackAssociationWithTrackOfInput:(id)input type:(id)type;	// 0x341fb079
// declared property getter: - (short)alternateGroupID;	// 0x341faccd
- (BOOL)appendPixelBuffer:(CVBufferRef)buffer withPresentationTime:(XXStruct_pwHToB)presentationTime;	// 0x341faec1
- (BOOL)appendSampleBuffer:(opaqueCMSampleBuffer *)buffer;	// 0x341fae35
- (BOOL)canAddTrackAssociationWithTrackOfInput:(id)input type:(id)type;	// 0x341fb075
// declared property getter: - (id)configurationState;	// 0x341fb105
- (void)dealloc;	// 0x341fa501
// declared property getter: - (BOOL)expectsMediaDataInRealTime;	// 0x341fa935
// declared property getter: - (id)extendedLanguageTag;	// 0x341fab65
// declared property getter: - (BOOL)isReadyForMoreMediaData;	// 0x341fa931
// declared property getter: - (id)languageCode;	// 0x341faab1
- (void)markAsFinished;	// 0x341faf55
// declared property getter: - (BOOL)marksOutputTrackAsEnabled;	// 0x341fac19
// declared property getter: - (int)mediaTimeScale;	// 0x341fa87d
// declared property getter: - (id)mediaType;	// 0x341fa681
// declared property getter: - (id)metadata;	// 0x341fa7c9
// declared property getter: - (CGSize)naturalSize;	// 0x341fa9e9
// declared property getter: - (id)outputSettings;	// 0x341fa6a9
// declared property getter: - (CVPixelBufferPoolRef)pixelBufferPool;	// 0x341fb071
- (void)prepareToEndSession;	// 0x341faf4d
- (BOOL)prepareToFinishWritingReturningError:(id *)finishWritingReturningError;	// 0x341faf51
- (void)requestMediaDataWhenReadyOnQueue:(id)queue usingBlock:(id)block;	// 0x341fada9
// declared property setter: - (void)setAlternateGroupID:(short)anId;	// 0x341facf5
// declared property setter: - (void)setExpectsMediaDataInRealTime:(BOOL)realTime;	// 0x341fa95d
// declared property setter: - (void)setExtendedLanguageTag:(id)tag;	// 0x341fab8d
// declared property setter: - (void)setLanguageCode:(id)code;	// 0x341faad9
// declared property setter: - (void)setMarksOutputTrackAsEnabled:(BOOL)enabled;	// 0x341fac41
// declared property setter: - (void)setMediaTimeScale:(int)scale;	// 0x341fa8a5
// declared property setter: - (void)setMetadata:(id)metadata;	// 0x341fa7f1
// declared property setter: - (void)setNaturalSize:(CGSize)size;	// 0x341faa25
// declared property setter: - (void)setSourcePixelBufferAttributes:(id)attributes;	// 0x341fb009
// declared property setter: - (void)setTransform:(CGAffineTransform)transform;	// 0x341fa73d
// declared property setter: - (void)setWeakReferenceToAssetWriterInput:(id)assetWriterInput;	// 0x341fb129
// declared property getter: - (opaqueCMFormatDescription *)sourceFormatHint;	// 0x341fa6d1
// declared property getter: - (id)sourcePixelBufferAttributes;	// 0x341fafe1
// declared property getter: - (int)status;	// 0x341fa565
// declared property getter: - (int)trackID;	// 0x341fa67d
// declared property getter: - (id)trackReferences;	// 0x341fad81
// declared property getter: - (CGAffineTransform)transform;	// 0x341fa6f9
- (void)transitionAssetWriterAndAllInputsToFailedStatusWithError:(id)error;	// 0x341fa641
- (void)transitionToTerminalStatus:(int)terminalStatus;	// 0x341fa599
// declared property getter: - (id)weakReferenceToAssetWriterInput;	// 0x341fb115
@end
