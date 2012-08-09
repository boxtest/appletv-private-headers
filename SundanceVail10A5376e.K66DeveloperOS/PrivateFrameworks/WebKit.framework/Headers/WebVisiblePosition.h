/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/WebKit.framework/WebKit
 */

#import "WebKit-Structs.h"
#import <NSObject.h> // Unknown library


@interface WebVisiblePosition : NSObject {
	WebObjectInternal *_internal;	// 4 = 0x4
}
@property(assign, nonatomic) int affinity;	// G=0x32383ccd; S=0x32383d19; 
+ (id)_wrapVisiblePosition:(VisiblePosition)position;	// 0x3237cac5
+ (id)_wrapVisiblePositionIfValid:(VisiblePosition)valid;	// 0x3237cb51
- (VisiblePosition)_visiblePosition;	// 0x3237cc81
// declared property getter: - (int)affinity;	// 0x32383ccd
- (BOOL)atAlphaNumericBoundaryInDirection:(int)direction;	// 0x323830cd
- (BOOL)atBoundaryOfGranularity:(int)granularity inDirection:(int)direction;	// 0x3237de61
- (int)compare:(id)compare;	// 0x3237cf41
- (void)dealloc;	// 0x3237ccbd
- (id)description;	// 0x3237d43d
- (BOOL)directionIsDownstream:(int)downstream;	// 0x3237d639
- (int)distanceFromPosition:(id)position;	// 0x3237d0dd
- (id)enclosingRangeWithCorrectionIndicator;	// 0x323837b9
- (id)enclosingRangeWithDictationPhraseAlternatives:(id *)dictationPhraseAlternatives;	// 0x32383295
- (id)enclosingTextUnitOfGranularity:(int)granularity inDirectionIfAtBoundary:(int)boundary;	// 0x32381301
- (BOOL)isEditable;	// 0x32382ded
- (BOOL)isEqual:(id)equal;	// 0x3237cdc1
- (id)nextCharacterBoundaryInDirection:(int)direction;	// 0x3237e5cd
- (id)nextDocumentBoundaryInDirection:(int)direction;	// 0x323805ad
- (id)nextLineBoundaryInDirection:(int)direction;	// 0x3237fb61
- (id)nextParagraphBoundaryInDirection:(int)direction;	// 0x32380045
- (id)nextSentenceBoundaryInDirection:(int)direction;	// 0x3237f57d
- (id)nextWordBoundaryInDirection:(int)direction;	// 0x3237e7fd
- (id)positionAtStartOrEndOfWord;	// 0x3238230d
- (id)positionByMovingInDirection:(int)direction amount:(unsigned long)amount;	// 0x3237de3d
- (id)positionByMovingInDirection:(int)direction amount:(unsigned long)amount withAffinityDownstream:(BOOL)affinityDownstream;	// 0x3237d67d
- (id)positionOfNextBoundaryOfGranularity:(int)granularity inDirection:(int)direction;	// 0x323807e1
- (BOOL)requiresContextForWordBoundary;	// 0x32382f85
// declared property setter: - (void)setAffinity:(int)affinity;	// 0x32383d19
- (int)textDirection;	// 0x3237d635
- (BOOL)withinTextUnitOfGranularity:(int)granularity inDirectionIfAtBoundary:(int)boundary;	// 0x32380841
@end
