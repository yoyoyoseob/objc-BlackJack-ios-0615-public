//
//  FISPlayingCardDeck.h
//  BlackJack
//
//  Created by Yoseob Lee on 6/10/15.
//  Copyright (c) 2015 Flatiron School. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "FISPlayingCard.h"

@interface FISPlayingCardDeck : NSObject
@property (nonatomic, strong) NSMutableArray *cards;
@property (nonatomic, strong) FISPlayingCard *card;

-(FISPlayingCard *)drawRandomCard;

-(instancetype)init;

@end
