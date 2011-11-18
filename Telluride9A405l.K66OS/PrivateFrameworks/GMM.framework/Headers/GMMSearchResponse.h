/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/GMM.framework/GMM
 */

#import <PBCodable.h> // Unknown library

@class GMMMapInfo, NSString, NSMutableArray;

__attribute__((visibility("hidden")))
@interface GMMSearchResponse : PBCodable {
	int _status;	// 4 = 0x4
	NSString *_errorMessage;	// 8 = 0x8
	NSString *_originalQuery;	// 12 = 0xc
	NSString *_refinementQuery;	// 16 = 0x10
	BOOL _hasAutoSpellingCorrected;	// 20 = 0x14
	BOOL _autoSpellingCorrected;	// 21 = 0x15
	NSString *_spellingSuggestion;	// 24 = 0x18
	GMMMapInfo *_mapInfo;	// 28 = 0x1c
	NSMutableArray *_searchResults;	// 32 = 0x20
	NSMutableArray *_documentInfos;	// 36 = 0x24
	NSMutableArray *_categorys;	// 40 = 0x28
	BOOL _hasResultOffset;	// 44 = 0x2c
	int _resultOffset;	// 48 = 0x30
	BOOL _hasPayloadType;	// 52 = 0x34
	int _payloadType;	// 56 = 0x38
	BOOL _hasTotalResults;	// 60 = 0x3c
	int _totalResults;	// 64 = 0x40
	NSString *_splitQuerySearchPart;	// 68 = 0x44
	NSString *_splitQueryLocationPart;	// 72 = 0x48
}
@property(assign, nonatomic) BOOL autoSpellingCorrected;	// G=0x31586559; S=0x3158657d; @synthesize=_autoSpellingCorrected
@property(retain, nonatomic) NSMutableArray *categorys;	// G=0x315876dd; S=0x315876ed; @synthesize=_categorys
@property(retain, nonatomic) NSMutableArray *documentInfos;	// G=0x315876a9; S=0x315876b9; @synthesize=_documentInfos
@property(retain, nonatomic) NSString *errorMessage;	// G=0x31587551; S=0x31587561; @synthesize=_errorMessage
@property(assign, nonatomic) BOOL hasAutoSpellingCorrected;	// G=0x315875ed; S=0x315875fd; @synthesize=_hasAutoSpellingCorrected
@property(readonly, assign, nonatomic) BOOL hasErrorMessage;	// G=0x31586511; 
@property(readonly, assign, nonatomic) BOOL hasMapInfo;	// G=0x315865b9; 
@property(readonly, assign, nonatomic) BOOL hasOriginalQuery;	// G=0x31586529; 
@property(assign, nonatomic) BOOL hasPayloadType;	// G=0x31587731; S=0x31587741; @synthesize=_hasPayloadType
@property(readonly, assign, nonatomic) BOOL hasRefinementQuery;	// G=0x31586541; 
@property(assign, nonatomic) BOOL hasResultOffset;	// G=0x31587711; S=0x31587721; @synthesize=_hasResultOffset
@property(readonly, assign, nonatomic) BOOL hasSpellingSuggestion;	// G=0x315865a1; 
@property(readonly, assign, nonatomic) BOOL hasSplitQueryLocationPart;	// G=0x315868b1; 
@property(readonly, assign, nonatomic) BOOL hasSplitQuerySearchPart;	// G=0x31586899; 
@property(assign, nonatomic) BOOL hasTotalResults;	// G=0x31587751; S=0x31587761; @synthesize=_hasTotalResults
@property(retain, nonatomic) GMMMapInfo *mapInfo;	// G=0x31587641; S=0x31587651; @synthesize=_mapInfo
@property(retain, nonatomic) NSString *originalQuery;	// G=0x31587585; S=0x31587595; @synthesize=_originalQuery
@property(assign, nonatomic) int payloadType;	// G=0x31586805; S=0x31586829; @synthesize=_payloadType
@property(retain, nonatomic) NSString *refinementQuery;	// G=0x315875b9; S=0x315875c9; @synthesize=_refinementQuery
@property(assign, nonatomic) int resultOffset;	// G=0x315867bd; S=0x315867e1; @synthesize=_resultOffset
@property(retain, nonatomic) NSMutableArray *searchResults;	// G=0x31587675; S=0x31587685; @synthesize=_searchResults
@property(retain, nonatomic) NSString *spellingSuggestion;	// G=0x3158760d; S=0x3158761d; @synthesize=_spellingSuggestion
@property(retain, nonatomic) NSString *splitQueryLocationPart;	// G=0x315877a5; S=0x315877b5; @synthesize=_splitQueryLocationPart
@property(retain, nonatomic) NSString *splitQuerySearchPart;	// G=0x31587771; S=0x31587781; @synthesize=_splitQuerySearchPart
@property(assign, nonatomic) int status;	// G=0x31587531; S=0x31587541; @synthesize=_status
@property(assign, nonatomic) int totalResults;	// G=0x3158684d; S=0x31586875; @synthesize=_totalResults
- (void)addCategory:(id)category;	// 0x31586719
- (void)addDocumentInfo:(id)info;	// 0x31586675
- (void)addSearchResult:(id)result;	// 0x315865d1
// declared property getter: - (BOOL)autoSpellingCorrected;	// 0x31586559
- (id)categoryAtIndex:(unsigned)index;	// 0x3158679d
// declared property getter: - (id)categorys;	// 0x315876dd
- (unsigned)categorysCount;	// 0x3158677d
- (void)dealloc;	// 0x31586419
- (id)description;	// 0x315868c9
- (id)dictionaryRepresentation;	// 0x31586939
- (id)documentInfoAtIndex:(unsigned)index;	// 0x315866f9
// declared property getter: - (id)documentInfos;	// 0x315876a9
- (unsigned)documentInfosCount;	// 0x315866d9
// declared property getter: - (id)errorMessage;	// 0x31587551
// declared property getter: - (BOOL)hasAutoSpellingCorrected;	// 0x315875ed
// declared property getter: - (BOOL)hasErrorMessage;	// 0x31586511
// declared property getter: - (BOOL)hasMapInfo;	// 0x315865b9
// declared property getter: - (BOOL)hasOriginalQuery;	// 0x31586529
// declared property getter: - (BOOL)hasPayloadType;	// 0x31587731
// declared property getter: - (BOOL)hasRefinementQuery;	// 0x31586541
// declared property getter: - (BOOL)hasResultOffset;	// 0x31587711
// declared property getter: - (BOOL)hasSpellingSuggestion;	// 0x315865a1
// declared property getter: - (BOOL)hasSplitQueryLocationPart;	// 0x315868b1
// declared property getter: - (BOOL)hasSplitQuerySearchPart;	// 0x31586899
// declared property getter: - (BOOL)hasTotalResults;	// 0x31587751
// declared property getter: - (id)mapInfo;	// 0x31587641
// declared property getter: - (id)originalQuery;	// 0x31587585
// declared property getter: - (int)payloadType;	// 0x31586805
- (BOOL)readFrom:(id)from;	// 0x31586c09
// declared property getter: - (id)refinementQuery;	// 0x315875b9
// declared property getter: - (int)resultOffset;	// 0x315867bd
- (id)searchResultAtIndex:(unsigned)index;	// 0x31586655
// declared property getter: - (id)searchResults;	// 0x31587675
- (unsigned)searchResultsCount;	// 0x31586635
// declared property setter: - (void)setAutoSpellingCorrected:(BOOL)corrected;	// 0x3158657d
// declared property setter: - (void)setCategorys:(id)categorys;	// 0x315876ed
// declared property setter: - (void)setDocumentInfos:(id)infos;	// 0x315876b9
// declared property setter: - (void)setErrorMessage:(id)message;	// 0x31587561
// declared property setter: - (void)setHasAutoSpellingCorrected:(BOOL)corrected;	// 0x315875fd
// declared property setter: - (void)setHasPayloadType:(BOOL)type;	// 0x31587741
// declared property setter: - (void)setHasResultOffset:(BOOL)offset;	// 0x31587721
// declared property setter: - (void)setHasTotalResults:(BOOL)results;	// 0x31587761
// declared property setter: - (void)setMapInfo:(id)info;	// 0x31587651
// declared property setter: - (void)setOriginalQuery:(id)query;	// 0x31587595
// declared property setter: - (void)setPayloadType:(int)type;	// 0x31586829
// declared property setter: - (void)setRefinementQuery:(id)query;	// 0x315875c9
// declared property setter: - (void)setResultOffset:(int)offset;	// 0x315867e1
// declared property setter: - (void)setSearchResults:(id)results;	// 0x31587685
// declared property setter: - (void)setSpellingSuggestion:(id)suggestion;	// 0x3158761d
// declared property setter: - (void)setSplitQueryLocationPart:(id)part;	// 0x315877b5
// declared property setter: - (void)setSplitQuerySearchPart:(id)part;	// 0x31587781
// declared property setter: - (void)setStatus:(int)status;	// 0x31587541
// declared property setter: - (void)setTotalResults:(int)results;	// 0x31586875
// declared property getter: - (id)spellingSuggestion;	// 0x3158760d
// declared property getter: - (id)splitQueryLocationPart;	// 0x315877a5
// declared property getter: - (id)splitQuerySearchPart;	// 0x31587771
// declared property getter: - (int)status;	// 0x31587531
// declared property getter: - (int)totalResults;	// 0x3158684d
- (void)writeTo:(id)to;	// 0x31587049
@end

