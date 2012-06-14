/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

#import "AVFoundation-Structs.h"
#import "AVAssetInspector.h"


@interface AVFormatReaderInspector : AVAssetInspector {
	OpaqueFigFormatReader *_formatReader;	// 4 = 0x4
	BOOL didCheckForSaveRestriction;	// 8 = 0x8
	BOOL hasSaveRestriction;	// 9 = 0x9
}
@property(retain, nonatomic, getter=_formatReader, setter=_setFormatReader:) OpaqueFigFormatReader *formatReader;	// G=0x326eda65; S=0x326eda39; 
- (id)initWithFormatReader:(OpaqueFigFormatReader *)formatReader;	// 0x326ed895
// declared property getter: - (OpaqueFigFormatReader *)_formatReader;	// 0x326eda65
- (BOOL)_hasQTSaveRestriction;	// 0x326ee0dd
// declared property setter: - (void)_setFormatReader:(OpaqueFigFormatReader *)reader;	// 0x326eda39
- (void *)_valueAsCFTypeForProperty:(CFStringRef)property;	// 0x326eda75
- (id)alternateTrackGroups;	// 0x326edc51
- (id)availableMetadataFormats;	// 0x326edde9
- (id)commonMetadata;	// 0x326edcb1
- (void)dealloc;	// 0x326ed8f9
- (XXStruct_pwHToB)duration;	// 0x326edac1
- (void)finalize;	// 0x326ed93d
- (unsigned)hash;	// 0x326ed9f1
- (BOOL)isComposable;	// 0x326ee275
- (BOOL)isEqual:(id)equal;	// 0x326ed981
- (BOOL)isExportable;	// 0x326ee22d
- (BOOL)isReadable;	// 0x326ee251
- (id)lyrics;	// 0x326edc91
- (id)metadataForFormat:(id)format;	// 0x326edf79
- (CGSize)naturalSize;	// 0x326edba5
- (int)naturalTimeScale;	// 0x326edbd1
- (float)preferredRate;	// 0x326edb2d
- (CGAffineTransform)preferredTransform;	// 0x326edb75
- (float)preferredVolume;	// 0x326edb51
- (BOOL)providesPreciseDurationAndTiming;	// 0x326edbf1
- (long)trackCount;	// 0x326edc19
- (id)trackReferences;	// 0x326edc71
@end
