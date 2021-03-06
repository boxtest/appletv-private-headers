/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

#import "SADomainObject.h"

@class NSDate, NSNumber, SALocalSearchReviewList, NSString, NSArray, NSURL;

@interface SAMovieMovie : SADomainObject {
}
@property(copy, nonatomic) NSArray *actors;	// G=0x32545c31; S=0x32545c4d; 
@property(copy, nonatomic) NSArray *directors;	// G=0x32545c9d; S=0x32545cb9; 
@property(copy, nonatomic) NSArray *genres;	// G=0x32545d09; S=0x32545d25; 
@property(copy, nonatomic) NSURL *hiResTrailerUri;	// G=0x32545d75; S=0x32545df1; 
@property(copy, nonatomic) NSURL *iTunesUri;	// G=0x32545e51; S=0x32545ecd; 
@property(assign, nonatomic) BOOL is3d;	// G=0x32545f2d; S=0x32545fa5; 
@property(copy, nonatomic) NSNumber *isAvailableOnItunesForPurchase;	// G=0x32545fe9; S=0x32546005; 
@property(copy, nonatomic) NSNumber *isAvailableOnItunesForRent;	// G=0x32546055; S=0x32546071; 
@property(copy, nonatomic) NSURL *lowResTrailerUri;	// G=0x325460c1; S=0x3254613d; 
@property(copy, nonatomic) NSString *name;	// G=0x3254619d; S=0x325461b9; 
@property(copy, nonatomic) NSArray *posterImages;	// G=0x32546209; S=0x32546285; 
@property(copy, nonatomic) NSURL *posterUri;	// G=0x325462ed; S=0x32546369; 
@property(copy, nonatomic) NSNumber *qualityRating;	// G=0x325463c9; S=0x325463e5; 
@property(copy, nonatomic) NSString *rating;	// G=0x32546435; S=0x32546451; 
@property(retain, nonatomic) SALocalSearchReviewList *reviews;	// G=0x325464a1; S=0x325464f5; 
@property(copy, nonatomic) NSURL *rottenTomatoesUri;	// G=0x32546531; S=0x325465ad; 
@property(assign, nonatomic) int runtimeInMinutes;	// G=0x3254660d; S=0x3254667d; 
@property(copy, nonatomic) NSArray *studios;	// G=0x325466c1; S=0x325466dd; 
@property(copy, nonatomic) NSString *synopsis;	// G=0x3254672d; S=0x32546749; 
@property(copy, nonatomic) NSString *theaterShowtimeSearchRegionDescription;	// G=0x32546799; S=0x325467b5; 
@property(copy, nonatomic) NSArray *theaterShowtimes;	// G=0x32546805; S=0x32546881; 
@property(copy, nonatomic) NSDate *theatricalReleaseDate;	// G=0x325468e9; S=0x32546905; 
@property(copy, nonatomic) NSURL *trailerUri;	// G=0x32546955; S=0x325469d1; 
+ (id)movie;	// 0x32545ba1
+ (id)movieWithDictionary:(id)dictionary context:(id)context;	// 0x32545be5
// declared property getter: - (id)actors;	// 0x32545c31
// declared property getter: - (id)directors;	// 0x32545c9d
- (id)encodedClassName;	// 0x32545b95
// declared property getter: - (id)genres;	// 0x32545d09
- (id)groupIdentifier;	// 0x32545b85
// declared property getter: - (id)hiResTrailerUri;	// 0x32545d75
// declared property getter: - (id)iTunesUri;	// 0x32545e51
// declared property getter: - (BOOL)is3d;	// 0x32545f2d
// declared property getter: - (id)isAvailableOnItunesForPurchase;	// 0x32545fe9
// declared property getter: - (id)isAvailableOnItunesForRent;	// 0x32546055
// declared property getter: - (id)lowResTrailerUri;	// 0x325460c1
// declared property getter: - (id)name;	// 0x3254619d
// declared property getter: - (id)posterImages;	// 0x32546209
// declared property getter: - (id)posterUri;	// 0x325462ed
// declared property getter: - (id)qualityRating;	// 0x325463c9
// declared property getter: - (id)rating;	// 0x32546435
// declared property getter: - (id)reviews;	// 0x325464a1
// declared property getter: - (id)rottenTomatoesUri;	// 0x32546531
// declared property getter: - (int)runtimeInMinutes;	// 0x3254660d
// declared property setter: - (void)setActors:(id)actors;	// 0x32545c4d
// declared property setter: - (void)setDirectors:(id)directors;	// 0x32545cb9
// declared property setter: - (void)setGenres:(id)genres;	// 0x32545d25
// declared property setter: - (void)setHiResTrailerUri:(id)uri;	// 0x32545df1
// declared property setter: - (void)setITunesUri:(id)uri;	// 0x32545ecd
// declared property setter: - (void)setIs3d:(BOOL)d;	// 0x32545fa5
// declared property setter: - (void)setIsAvailableOnItunesForPurchase:(id)purchase;	// 0x32546005
// declared property setter: - (void)setIsAvailableOnItunesForRent:(id)rent;	// 0x32546071
// declared property setter: - (void)setLowResTrailerUri:(id)uri;	// 0x3254613d
// declared property setter: - (void)setName:(id)name;	// 0x325461b9
// declared property setter: - (void)setPosterImages:(id)images;	// 0x32546285
// declared property setter: - (void)setPosterUri:(id)uri;	// 0x32546369
// declared property setter: - (void)setQualityRating:(id)rating;	// 0x325463e5
// declared property setter: - (void)setRating:(id)rating;	// 0x32546451
// declared property setter: - (void)setReviews:(id)reviews;	// 0x325464f5
// declared property setter: - (void)setRottenTomatoesUri:(id)uri;	// 0x325465ad
// declared property setter: - (void)setRuntimeInMinutes:(int)minutes;	// 0x3254667d
// declared property setter: - (void)setStudios:(id)studios;	// 0x325466dd
// declared property setter: - (void)setSynopsis:(id)synopsis;	// 0x32546749
// declared property setter: - (void)setTheaterShowtimeSearchRegionDescription:(id)description;	// 0x325467b5
// declared property setter: - (void)setTheaterShowtimes:(id)showtimes;	// 0x32546881
// declared property setter: - (void)setTheatricalReleaseDate:(id)date;	// 0x32546905
// declared property setter: - (void)setTrailerUri:(id)uri;	// 0x325469d1
// declared property getter: - (id)studios;	// 0x325466c1
// declared property getter: - (id)synopsis;	// 0x3254672d
// declared property getter: - (id)theaterShowtimeSearchRegionDescription;	// 0x32546799
// declared property getter: - (id)theaterShowtimes;	// 0x32546805
// declared property getter: - (id)theatricalReleaseDate;	// 0x325468e9
// declared property getter: - (id)trailerUri;	// 0x32546955
- (void)updateUsingSet:(id)set add:(id)add remove:(id)remove;	// 0x32546a31
@end

