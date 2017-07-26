/*
* Beginning C++ Through Game Programming
* Chapter 10 Exercise 1
* Improving Simple Boss 2.0 Program
*/


#include <iostream>
using namespace std;

class Enemy
{
public:
    Enemy();
    void Attack() const;

protected:
    int m_Damage;
};

Enemy::Enemy():
    m_Damage(10)
{}

void Enemy::Attack() const
{
    cout << "Attack inflicts " << m_Damage << " damage points!\n";
}

class Boss : public Enemy
{
public:
    Boss();
    void SpecialAttack() const;

private:
    int m_DamageMultiplier;
};

Boss::Boss():
    m_DamageMultiplier(3)
{}

void Boss::SpecialAttack() const
{
    cout << "Special Attack inflicts " << (m_DamageMultiplier * m_Damage);
    cout << " damage points!\n";
}

class FinalBoss : public Enemy
{
public:
    FinalBoss();
    void MegaAttack() const;
private:
    int m_DamageMultiplier;
};

FinalBoss::FinalBoss():
  m_DamageMultiplier(10)
{}

void FinalBoss::MegaAttack() const
{
    cout << "Mega Attack inflicts " << (m_DamageMultiplier * m_Damage);
    cout << " damage points!\n";
}
int main()
{
    cout << "Creating an enemy.\n";
    Enemy enemy1;
    enemy1.Attack();

    cout << "\nCreating a boss.\n";
    Boss boss1;
    boss1.Attack();
    boss1.SpecialAttack();

    cout << "\nCreating the final boss.\n";
    FinalBoss finalBoss;
    finalBoss.Attack();
    finalBoss.MegaAttack();

    return 0;
}
