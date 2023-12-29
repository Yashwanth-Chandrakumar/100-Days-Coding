class Solution:
    def carFleet(self, target: int, position: List[int], speed: List[int]) -> int:
        n = len(position)
        times = [(target-pos)/spd for pos,spd in zip(position,speed)]
        cars = list(zip(position,speed,times))
        cars.sort(reverse=True)
        fleets = 0
        curr = 0
        for pos,spd,time in cars:
            if time>curr:
                fleets+=1
                curr=time
        return fleets
