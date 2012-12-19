/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

#import <PBRequest.h> // Unknown library
#import "GeoServices-Structs.h"


@interface GEOPlaceSearchFeedbackRequest : PBRequest {
	XXStruct_t9EeIA _sessionGUID;	// 4 = 0x4
	long long _businessID;	// 20 = 0x14
	double _timestamp;	// 28 = 0x1c
	int _feedbackType;	// 36 = 0x24
	int _localSearchProviderID;	// 40 = 0x28
	int _numberOfResults;	// 44 = 0x2c
	int _positionInResults;	// 48 = 0x30
	int _sequenceNumber;	// 52 = 0x34
	struct {
		unsigned course : 1;
		unsigned heading : 1;
		unsigned horizontalAccuracy : 1;
		unsigned speed : 1;
		unsigned timestamp : 1;
		unsigned verticalAccuracy : 1;
		unsigned altitude : 1;
		unsigned type : 1;
	} _has;	// 56 = 0x38
}
@property(assign, nonatomic) long long businessID;	// G=0x341ad715; S=0x341ac2e5; @synthesize=_businessID
@property(assign, nonatomic) int feedbackType;	// G=0x341ad72d; S=0x341ac34d; @synthesize=_feedbackType
@property(assign, nonatomic) BOOL hasBusinessID;	// G=0x341ac339; S=0x341ac319; 
@property(assign, nonatomic) BOOL hasFeedbackType;	// G=0x341ac395; S=0x341ac375; 
@property(assign, nonatomic) BOOL hasLocalSearchProviderID;	// G=0x341ac501; S=0x341ac4e1; 
@property(assign, nonatomic) BOOL hasNumberOfResults;	// G=0x341ac3f1; S=0x341ac3d1; 
@property(assign, nonatomic) BOOL hasPositionInResults;	// G=0x341ac44d; S=0x341ac42d; 
@property(assign, nonatomic) BOOL hasSequenceNumber;	// G=0x341ac4a5; S=0x341ac489; 
@property(assign, nonatomic) BOOL hasSessionGUID;	// G=0x341ac2d1; S=0x341ac2b5; 
@property(assign, nonatomic) BOOL hasTimestamp;	// G=0x341ac261; S=0x341ac241; 
@property(assign, nonatomic) int localSearchProviderID;	// G=0x341ad76d; S=0x341ac4b9; @synthesize=_localSearchProviderID
@property(assign, nonatomic) int numberOfResults;	// G=0x341ad73d; S=0x341ac3a9; @synthesize=_numberOfResults
@property(assign, nonatomic) int positionInResults;	// G=0x341ad74d; S=0x341ac405; @synthesize=_positionInResults
@property(assign, nonatomic) int sequenceNumber;	// G=0x341ad75d; S=0x341ac461; @synthesize=_sequenceNumber
@property(assign, nonatomic) XXStruct_t9EeIA sessionGUID;	// G=0x341ad6f1; S=0x341ac275; @synthesize=_sessionGUID
@property(assign, nonatomic) double timestamp;	// G=0x341ad6d9; S=0x341ac20d; @synthesize=_timestamp
// declared property getter: - (long long)businessID;	// 0x341ad715
- (void)copyTo:(id)to;	// 0x341ad08d
- (void)dealloc;	// 0x341ac1e1
- (id)description;	// 0x341ac515
- (id)dictionaryRepresentation;	// 0x341ac585
// declared property getter: - (int)feedbackType;	// 0x341ad72d
// declared property getter: - (BOOL)hasBusinessID;	// 0x341ac339
// declared property getter: - (BOOL)hasFeedbackType;	// 0x341ac395
// declared property getter: - (BOOL)hasLocalSearchProviderID;	// 0x341ac501
// declared property getter: - (BOOL)hasNumberOfResults;	// 0x341ac3f1
// declared property getter: - (BOOL)hasPositionInResults;	// 0x341ac44d
// declared property getter: - (BOOL)hasSequenceNumber;	// 0x341ac4a5
// declared property getter: - (BOOL)hasSessionGUID;	// 0x341ac2d1
// declared property getter: - (BOOL)hasTimestamp;	// 0x341ac261
- (unsigned)hash;	// 0x341ad4e1
- (BOOL)isEqual:(id)equal;	// 0x341ad2b1
// declared property getter: - (int)localSearchProviderID;	// 0x341ad76d
// declared property getter: - (int)numberOfResults;	// 0x341ad73d
// declared property getter: - (int)positionInResults;	// 0x341ad74d
- (BOOL)readFrom:(id)from;	// 0x341ace55
- (unsigned)requestTypeCode;	// 0x341ad069
- (Class)responseClass;	// 0x341ad071
// declared property getter: - (int)sequenceNumber;	// 0x341ad75d
// declared property getter: - (XXStruct_t9EeIA)sessionGUID;	// 0x341ad6f1
// declared property setter: - (void)setBusinessID:(long long)anId;	// 0x341ac2e5
// declared property setter: - (void)setFeedbackType:(int)type;	// 0x341ac34d
// declared property setter: - (void)setHasBusinessID:(BOOL)anId;	// 0x341ac319
// declared property setter: - (void)setHasFeedbackType:(BOOL)type;	// 0x341ac375
// declared property setter: - (void)setHasLocalSearchProviderID:(BOOL)anId;	// 0x341ac4e1
// declared property setter: - (void)setHasNumberOfResults:(BOOL)results;	// 0x341ac3d1
// declared property setter: - (void)setHasPositionInResults:(BOOL)results;	// 0x341ac42d
// declared property setter: - (void)setHasSequenceNumber:(BOOL)number;	// 0x341ac489
// declared property setter: - (void)setHasSessionGUID:(BOOL)guid;	// 0x341ac2b5
// declared property setter: - (void)setHasTimestamp:(BOOL)timestamp;	// 0x341ac241
// declared property setter: - (void)setLocalSearchProviderID:(int)anId;	// 0x341ac4b9
// declared property setter: - (void)setNumberOfResults:(int)results;	// 0x341ac3a9
// declared property setter: - (void)setPositionInResults:(int)results;	// 0x341ac405
// declared property setter: - (void)setSequenceNumber:(int)number;	// 0x341ac461
// declared property setter: - (void)setSessionGUID:(XXStruct_t9EeIA)guid;	// 0x341ac275
// declared property setter: - (void)setTimestamp:(double)timestamp;	// 0x341ac20d
// declared property getter: - (double)timestamp;	// 0x341ad6d9
- (void)writeTo:(id)to;	// 0x341ace61
@end
