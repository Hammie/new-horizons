



#define LAI_DEFAULT_TEMPLATE	""			//Шаблон по умолчанию
#define LAI_DEFAULT_TYPE		""			//Тип по умолчанию
#define LAI_DEFAULT_GROUP		""			//Группа по умолчанию
#define LAI_DEFAULT_ALARMREACT	1			//Реакция на атаку
#define LAI_DEFAULT_GRPALARMR	1			//Групповая реакция на атаку
#define LAI_DEFAULT_HP			40.0		//Количество хп по умолчанию
#define LAI_DEFAULT_HP_MAX		40.0		//Максимальное количество хп по умолчанию
#define LAI_DEFAULT_CHARGE		1.0			//Состояние зарядки пистолета по умолчанию
#define LAI_DEFAULT_DLTHP		0.1			//Скорость наростания хп в секунду
#define LAI_DEFAULT_DLTBLTHP	5			//Скорость наростания бутылочных хп в секунду
#define LAI_DEFAULT_DLTCHRG		0.05		//Скорость зарядки пистолета в секунду

//По умолчанию для создаваемой группы
#define LAI_GROUP_DEF_LOOK		15.0		//Радиус видимости противника
#define LAI_GROUP_DEF_HEAR		2.5			//Радиус обязательного обнаружения противника
#define LAI_GROUP_DEF_SAY		15.0		//Радиус сообщения об обнаруженом противнике согрупникам

//Для группы игрока
#define LAI_GROUP_PLA_LOOK		12.0		//Радиус видимости противника
#define LAI_GROUP_PLA_HEAR		8.0			//Радиус обязательного обнаружения противника
#define LAI_GROUP_PLA_SAY		20.0		//Радиус сообщения об обнаруженом противнике согрупникам

//Для группы стражников
#define LAI_GROUP_GRD_LOOK		15.0		//Радиус видимости противника
#define LAI_GROUP_GRD_HEAR		8.0			//Радиус обязательного обнаружения противника
#define LAI_GROUP_GRD_SAY		15.0		//Радиус сообщения об обнаруженом противнике согрупникам

// KK: patrol
#define LAI_GROUP_PTR_LOOK		15.0		//Радиус видимости противника
#define LAI_GROUP_PTR_HEAR		8.0			//Радиус обязательного обнаружения противника
#define LAI_GROUP_PTR_SAY		15.0		//Радиус сообщения об обнаруженом противнике согрупникам
// <-- KK

//Для группы актёров
#define LAI_GROUP_ACT_LOOK		10.0		//Радиус видимости противника
#define LAI_GROUP_ACT_HEAR		2.0			//Радиус обязательного обнаружения противника
#define LAI_GROUP_ACT_SAY		8.0			//Радиус сообщения об обнаруженом противнике согрупникам

//Для группы губернатора
#define LAI_GROUP_HUB_LOOK		10.0		//Радиус видимости противника
#define LAI_GROUP_HUB_HEAR		3.0			//Радиус обязательного обнаружения противника
#define LAI_GROUP_HUB_SAY		20.0		//Радиус сообщения об обнаруженом противнике согрупникам

//Для группы монстров
#define LAI_GROUP_MNS_LOOK		10.0		//Радиус видимости противника
#define LAI_GROUP_MNS_HEAR		6.0			//Радиус обязательного обнаружения противника
#define LAI_GROUP_MNS_SAY		15.0		//Радиус сообщения об обнаруженом противнике согрупникам



#define LAI_GROUP_DEFAULT		""					//Группа по умолчанию
#define LAI_GROUP_CITIZEN		""					//Группа горожан дружественная с охраниками, нейтральная с игроком
#define LAI_GROUP_PLAYER		"player"			//Группа игрока дружественная с охраниками, нейтральная с горожанами
#define LAI_GROUP_GUARDS		"guards"			//Группа охраников дружественная ко всем определённым групам
#define LAI_GROUP_PATROL		"patrol"			// KK
#define LAI_GROUP_ACTOR			"actor"				//Группа актёров, нейтральная ко всем определёным группам
#define LAI_GROUP_HUBER			"huber"				//Группа губернатора дружественная с охраниками и горожанам, нейтральная с игроком
#define LAI_GROUP_MONSTERS		"monsters"			//Группа монстров, враждебна со всеми
#define LAI_GROUP_BRDENEMY		"brdenemy"			//Группа противников при абордаже
#define LAI_GROUP_BUILDINGS		"buildings"			// PB



#define LAI_GROUP_FRIEND		"friend"			//Дружественные отношение
#define LAI_GROUP_NEUTRAL		"neitral"			//Нейтральные отношение
#define LAI_GROUP_ENEMY			"enemy"				//Враждебные отношения


//Приоритеты групп
#define LAI_GROUP_PDEFAULT		10					//Значение преоритета по умолчанию
#define LAI_GROUP_PPLAYER		100					//Значение преоритета для игрока
#define LAI_GROUP_PGUARDS		1000				//Значение преоритета для охраников
#define LAI_GROUP_PCITIZENS		10000				//Значение преоритета для горожан и им подобных



//old event defines
#define EVENT_CHARACTER_DEAD	"EventCharacterDead"
#define EVENT_CHARACTER_GROUPDEAD "EventCharacterGroupDead"
